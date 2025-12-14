/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 54310
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=54310 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/54310
*/
#include "init.h"
#define max(a,b) \
    ({ __typeof__ (a) _a = (a); \
       __typeof__ (b) _b = (b); \
       _a > _b ? _a : _b; })
#define min(a,b) \
    ({ __typeof__ (a) _a = (a); \
       __typeof__ (b) _b = (b); \
       _a < _b ? _a : _b; })
void test() {
    var_13 = ((/* implicit */unsigned int) max((var_13), (((/* implicit */unsigned int) var_11))));
    /* LoopSeq 1 */
    for (long long int i_0 = 0; i_0 < 21; i_0 += 1) 
    {
        var_14 = ((/* implicit */int) (short)-21282);
        /* LoopSeq 1 */
        for (unsigned long long int i_1 = 0; i_1 < 21; i_1 += 3) 
        {
            var_15 -= ((/* implicit */_Bool) min(((~(arr_0 [(unsigned short)17] [(unsigned short)17]))), (((/* implicit */unsigned long long int) ((((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) == (417692374U)))) % (((/* implicit */int) ((((/* implicit */int) (short)-21266)) <= (((/* implicit */int) (short)-21265))))))))));
            arr_6 [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned char)246)) + (((((/* implicit */int) var_5)) + ((+(((/* implicit */int) var_0))))))));
            arr_7 [i_0] = ((/* implicit */int) max((((/* implicit */short) (unsigned char)93)), (var_4)));
        }
        /* LoopNest 3 */
        for (unsigned long long int i_2 = 0; i_2 < 21; i_2 += 4) 
        {
            for (long long int i_3 = 0; i_3 < 21; i_3 += 4) 
            {
                for (unsigned char i_4 = 2; i_4 < 19; i_4 += 1) 
                {
                    {
                        arr_19 [(unsigned char)9] [i_0] = arr_16 [i_0] [i_2] [i_2] [i_0];
                        var_16 = var_10;
                    }
                } 
            } 
        } 
        var_17 -= ((/* implicit */_Bool) max((((((/* implicit */int) var_6)) << (((/* implicit */int) ((((/* implicit */int) (short)21281)) <= (469762048)))))), (((/* implicit */int) min((((/* implicit */unsigned short) (short)-21262)), ((unsigned short)39766))))));
    }
    /* LoopNest 3 */
    for (unsigned int i_5 = 0; i_5 < 17; i_5 += 3) 
    {
        for (unsigned char i_6 = 3; i_6 < 16; i_6 += 2) 
        {
            for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
            {
                {
                    arr_28 [i_6] = ((/* implicit */_Bool) var_3);
                    arr_29 [i_7] [2U] [2U] [i_5] |= ((/* implicit */unsigned short) arr_12 [i_5] [6LL] [0] [(unsigned short)16]);
                }
            } 
        } 
    } 
    var_18 = ((unsigned short) ((max((((/* implicit */long long int) (unsigned short)28672)), (-5653860283562174652LL))) & (((/* implicit */long long int) ((/* implicit */int) var_11)))));
}
