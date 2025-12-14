/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 212808
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=212808 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/212808
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
    var_15 = ((/* implicit */short) min((((/* implicit */unsigned int) ((((/* implicit */unsigned int) min((((/* implicit */int) var_0)), (var_14)))) > (((((/* implicit */unsigned int) var_3)) ^ (var_7)))))), ((~(max((((/* implicit */unsigned int) 1536995383)), (var_7)))))));
    /* LoopSeq 1 */
    /* vectorizable */
    for (_Bool i_0 = 0; i_0 < 0; i_0 += 1) 
    {
        arr_4 [(_Bool)1] = ((((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_2))) > (0ULL)))) >> ((((~(var_3))) - (2122339026))));
        var_16 += ((/* implicit */long long int) (-(((/* implicit */int) (signed char)118))));
        var_17 = ((/* implicit */long long int) ((((/* implicit */int) arr_2 [i_0 + 1])) != (((/* implicit */int) arr_2 [i_0 + 1]))));
        /* LoopNest 2 */
        for (signed char i_1 = 0; i_1 < 22; i_1 += 4) 
        {
            for (signed char i_2 = 0; i_2 < 22; i_2 += 3) 
            {
                {
                    var_18 = ((/* implicit */unsigned int) ((arr_1 [i_0] [i_0 + 1]) <= (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) (signed char)-41))) <= (-822520751059435042LL)))))));
                    /* LoopSeq 2 */
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        var_19 &= ((/* implicit */unsigned int) ((((/* implicit */int) var_0)) >> (((var_5) - (460659720955465529LL)))));
                        var_20 = ((/* implicit */short) ((((/* implicit */int) (signed char)0)) ^ (((/* implicit */int) arr_0 [i_0 + 1]))));
                        var_21 ^= ((/* implicit */unsigned char) (~(((/* implicit */int) (signed char)40))));
                        var_22 = ((/* implicit */signed char) max((var_22), (((/* implicit */signed char) ((((/* implicit */int) (signed char)118)) > (((/* implicit */int) (signed char)-113)))))));
                    }
                    for (unsigned int i_4 = 1; i_4 < 21; i_4 += 3) 
                    {
                        var_23 = ((/* implicit */signed char) (~(((var_4) ^ (((/* implicit */int) (unsigned short)58477))))));
                        /* LoopSeq 3 */
                        for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) /* same iter space */
                        {
                            var_24 = ((/* implicit */unsigned char) max((var_24), (((/* implicit */unsigned char) ((((/* implicit */int) (!(((/* implicit */_Bool) 800644850U))))) >> (((arr_3 [i_4 + 1]) - (2879215849U))))))));
                            var_25 = ((/* implicit */signed char) (-(arr_6 [i_4 - 1] [i_4] [i_0 + 1])));
                        }
                        for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) /* same iter space */
                        {
                            var_26 = ((/* implicit */unsigned long long int) (((-(((/* implicit */int) (signed char)41)))) != (((/* implicit */int) (!(((/* implicit */_Bool) var_8)))))));
                            var_27 = ((/* implicit */_Bool) ((var_8) >> (((/* implicit */int) ((((/* implicit */unsigned long long int) arr_14 [i_1] [i_1] [i_2] [i_4])) > (15485947399907911749ULL))))));
                            arr_21 [i_6] = ((/* implicit */unsigned short) (~(268434432U)));
                            var_28 = ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)168))) == (16999549388939624509ULL))))) == (var_1)));
                            var_29 = ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) 1005473406U)) > (16999549388939624509ULL)));
                        }
                        for (int i_7 = 0; i_7 < 22; i_7 += 3) 
                        {
                            var_30 = ((/* implicit */long long int) (+(16999549388939624509ULL)));
                            var_31 = ((/* implicit */int) max((var_31), (((/* implicit */int) ((((/* implicit */int) ((arr_10 [i_0] [i_2] [i_0] [i_2] [i_7]) == (((/* implicit */unsigned long long int) arr_13 [i_1] [i_4 - 1] [i_1] [i_0 + 1]))))) > (((/* implicit */int) arr_5 [i_0 + 1])))))));
                            var_32 = ((/* implicit */int) ((((var_6) >> (((/* implicit */int) var_13)))) >> ((((~(((/* implicit */int) var_13)))) + (62)))));
                        }
                    }
                    var_33 = ((/* implicit */_Bool) ((((-6553412725356065422LL) + (9223372036854775807LL))) >> (((((/* implicit */int) (signed char)-44)) + (73)))));
                    var_34 *= ((/* implicit */int) (((~(((/* implicit */int) arr_8 [i_2] [i_1] [i_0 + 1] [i_0 + 1])))) <= (((/* implicit */int) var_10))));
                }
            } 
        } 
    }
}
