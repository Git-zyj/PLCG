/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 193073
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=193073 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/193073
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
    var_17 = ((/* implicit */unsigned short) var_14);
    /* LoopSeq 1 */
    for (unsigned char i_0 = 0; i_0 < 12; i_0 += 2) 
    {
        var_18 ^= var_12;
        /* LoopNest 3 */
        for (signed char i_1 = 0; i_1 < 12; i_1 += 1) 
        {
            for (unsigned char i_2 = 2; i_2 < 8; i_2 += 1) 
            {
                for (long long int i_3 = 2; i_3 < 9; i_3 += 1) 
                {
                    {
                        var_19 = ((/* implicit */long long int) arr_6 [i_3] [3]);
                        var_20 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((unsigned char) (-2147483647 - 1)))) ? (((((/* implicit */_Bool) (-2147483647 - 1))) ? (((/* implicit */unsigned long long int) (-2147483647 - 1))) : (1067072425890888077ULL))) : (((/* implicit */unsigned long long int) var_10))));
                    }
                } 
            } 
        } 
        var_21 = ((/* implicit */long long int) (!(((/* implicit */_Bool) ((unsigned short) 17379671647818663539ULL)))));
        arr_14 [i_0] [i_0] = ((/* implicit */signed char) max((((/* implicit */int) ((((/* implicit */_Bool) max((arr_3 [i_0] [i_0]), (arr_13 [i_0] [i_0])))) && (((/* implicit */_Bool) (-(((/* implicit */int) arr_10 [i_0])))))))), (((int) max((8332145439606862324LL), (((/* implicit */long long int) (signed char)88)))))));
    }
    /* LoopNest 2 */
    for (signed char i_4 = 2; i_4 < 15; i_4 += 4) 
    {
        for (short i_5 = 3; i_5 < 15; i_5 += 2) 
        {
            {
                arr_19 [i_5] = ((/* implicit */unsigned short) (-((+(((unsigned int) arr_17 [i_5] [i_5] [i_4 + 1]))))));
                arr_20 [i_4] [i_4] |= ((/* implicit */unsigned short) (!(((/* implicit */_Bool) (+(((/* implicit */int) (signed char)122)))))));
            }
        } 
    } 
    /* LoopNest 2 */
    for (unsigned long long int i_6 = 0; i_6 < 17; i_6 += 2) 
    {
        for (int i_7 = 2; i_7 < 15; i_7 += 2) 
        {
            {
                arr_27 [i_6] = ((/* implicit */unsigned long long int) arr_24 [i_6] [i_6] [i_6]);
                /* LoopNest 2 */
                for (unsigned short i_8 = 2; i_8 < 16; i_8 += 3) 
                {
                    for (short i_9 = 0; i_9 < 17; i_9 += 1) 
                    {
                        {
                            arr_34 [i_9] [(unsigned short)5] [(unsigned short)5] [i_8] [i_7] [i_6] = ((/* implicit */_Bool) ((unsigned char) (unsigned short)32664));
                            var_22 = ((/* implicit */unsigned char) min((var_22), (((/* implicit */unsigned char) ((min(((-(((/* implicit */int) arr_24 [i_9] [1LL] [i_6])))), ((-(((/* implicit */int) (unsigned short)32664)))))) <= (var_10))))));
                        }
                    } 
                } 
            }
        } 
    } 
}
