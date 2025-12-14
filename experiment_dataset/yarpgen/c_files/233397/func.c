/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 233397
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=233397 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/233397
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
    /* LoopNest 2 */
    for (_Bool i_0 = 1; i_0 < 1; i_0 += 1) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                /* LoopSeq 1 */
                for (long long int i_2 = 3; i_2 < 16; i_2 += 2) 
                {
                    var_11 = ((/* implicit */unsigned short) var_4);
                    var_12 = ((/* implicit */int) max((var_12), (((/* implicit */int) min((7939286489853867976ULL), (10507457583855683639ULL))))));
                    /* LoopSeq 2 */
                    for (long long int i_3 = 2; i_3 < 16; i_3 += 3) 
                    {
                        /* LoopSeq 1 */
                        for (unsigned short i_4 = 0; i_4 < 17; i_4 += 1) 
                        {
                            var_13 &= ((/* implicit */signed char) var_1);
                            var_14 = ((((((/* implicit */_Bool) arr_2 [i_0])) && (((((/* implicit */_Bool) (unsigned char)183)) && (((/* implicit */_Bool) var_3)))))) ? ((-(-2137916698))) : (((/* implicit */int) ((_Bool) arr_12 [i_2 - 2] [i_2 - 2] [i_2 - 2] [i_2 - 2]))));
                            var_15 = ((/* implicit */unsigned long long int) min((var_15), (((/* implicit */unsigned long long int) ((((/* implicit */int) arr_3 [i_3])) == (((/* implicit */int) var_0)))))));
                            arr_16 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */long long int) ((int) arr_5 [i_4]));
                            var_16 = ((/* implicit */_Bool) min((var_16), ((_Bool)0)));
                        }
                        /* LoopSeq 1 */
                        for (unsigned long long int i_5 = 1; i_5 < 15; i_5 += 3) 
                        {
                            var_17 = ((/* implicit */unsigned short) (~(((/* implicit */int) ((((/* implicit */int) (!(((/* implicit */_Bool) 298324931U))))) > (((/* implicit */int) var_0)))))));
                            var_18 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) 298324931U)) ? (458267071U) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1)))));
                        }
                    }
                    for (unsigned long long int i_6 = 0; i_6 < 17; i_6 += 4) 
                    {
                        var_19 ^= ((/* implicit */_Bool) min((-1080551056), (-574433586)));
                        var_20 = ((/* implicit */_Bool) ((long long int) ((unsigned int) max((((/* implicit */short) (signed char)63)), ((short)-7836)))));
                        var_21 = ((/* implicit */signed char) max((var_21), (((/* implicit */signed char) ((max((((/* implicit */unsigned long long int) (_Bool)1)), (((((/* implicit */_Bool) var_10)) ? (17692533399837010645ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_4))))))) & (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_2 [i_6])))))))))));
                    }
                    /* LoopNest 2 */
                    for (unsigned char i_7 = 0; i_7 < 17; i_7 += 1) 
                    {
                        for (signed char i_8 = 0; i_8 < 17; i_8 += 3) 
                        {
                            {
                                var_22 = ((/* implicit */_Bool) ((unsigned char) arr_12 [i_7] [i_7] [i_7] [i_7]));
                                arr_26 [i_0] = ((/* implicit */unsigned long long int) (!((!(((/* implicit */_Bool) arr_14 [i_2 - 2] [i_2 - 2] [i_0 - 1]))))));
                            }
                        } 
                    } 
                }
                var_23 = ((/* implicit */long long int) max((var_23), (((/* implicit */long long int) (unsigned short)35434))));
            }
        } 
    } 
    var_24 = ((/* implicit */unsigned short) var_7);
}
