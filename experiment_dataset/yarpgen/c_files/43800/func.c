/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 43800
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=43800 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/43800
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
    var_18 = ((/* implicit */unsigned char) var_17);
    /* LoopSeq 2 */
    /* vectorizable */
    for (signed char i_0 = 0; i_0 < 21; i_0 += 2) 
    {
        /* LoopNest 2 */
        for (unsigned char i_1 = 0; i_1 < 21; i_1 += 4) 
        {
            for (unsigned int i_2 = 0; i_2 < 21; i_2 += 4) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned short i_3 = 0; i_3 < 21; i_3 += 3) 
                    {
                        for (short i_4 = 0; i_4 < 21; i_4 += 1) 
                        {
                            {
                                var_19 += ((/* implicit */long long int) ((((/* implicit */int) arr_6 [i_4])) - (((/* implicit */int) arr_6 [i_0]))));
                                arr_15 [i_0] [i_1] [i_2] [i_1] [i_4] = ((/* implicit */long long int) (~(((((/* implicit */int) (unsigned char)86)) ^ (((/* implicit */int) var_14))))));
                                arr_16 [i_0] [i_0] [i_2] [i_3] [i_4] = ((((/* implicit */_Bool) -1941233665808679664LL)) ? (((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)0))) % (12405465460672165565ULL))) : (((/* implicit */unsigned long long int) arr_13 [i_0] [i_1] [i_2] [i_3] [i_4])));
                            }
                        } 
                    } 
                    var_20 += ((/* implicit */unsigned long long int) (+(((/* implicit */int) ((((/* implicit */long long int) arr_3 [i_2] [i_0] [i_0])) <= (-4723096713355146054LL))))));
                }
            } 
        } 
        /* LoopNest 3 */
        for (signed char i_5 = 0; i_5 < 21; i_5 += 3) 
        {
            for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
            {
                for (unsigned int i_7 = 4; i_7 < 20; i_7 += 4) 
                {
                    {
                        arr_26 [i_6] = ((/* implicit */unsigned char) ((signed char) arr_22 [i_7 - 2] [i_7] [i_7 - 1] [i_5]));
                        var_21 = ((/* implicit */signed char) ((_Bool) 2131661849U));
                    }
                } 
            } 
        } 
        var_22 = ((/* implicit */short) max((var_22), (((/* implicit */short) (!(((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) % (4723096713355146073LL)))))))));
    }
    /* vectorizable */
    for (long long int i_8 = 0; i_8 < 11; i_8 += 4) 
    {
        var_23 = arr_8 [(short)15] [i_8] [i_8] [(short)15] [i_8];
        var_24 = ((/* implicit */signed char) 12356684476720039763ULL);
    }
    /* LoopSeq 1 */
    for (long long int i_9 = 0; i_9 < 23; i_9 += 3) 
    {
        var_25 += ((/* implicit */short) (!(((/* implicit */_Bool) min((((/* implicit */unsigned long long int) ((arr_31 [(_Bool)1] [i_9]) - (var_8)))), (arr_29 [i_9]))))));
        var_26 = ((/* implicit */unsigned long long int) ((((long long int) 4723096713355146084LL)) / ((~(arr_31 [13ULL] [i_9])))));
    }
}
