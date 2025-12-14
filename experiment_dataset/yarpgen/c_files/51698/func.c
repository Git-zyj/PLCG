/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 51698
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=51698 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/51698
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
    var_13 = ((/* implicit */_Bool) min(((+(max((((/* implicit */unsigned long long int) var_0)), (var_2))))), (((/* implicit */unsigned long long int) ((((int) (unsigned char)4)) / (((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) (signed char)-93)) : (((/* implicit */int) var_4)))))))));
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 18; i_0 += 4) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                arr_4 [(_Bool)1] [4ULL] |= ((/* implicit */unsigned long long int) min((((/* implicit */unsigned int) (!(((/* implicit */_Bool) (+(arr_1 [i_1]))))))), (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_0)) ? (arr_1 [i_1]) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_11)))))) ? (max((((/* implicit */unsigned int) arr_0 [i_1])), (arr_3 [i_0] [i_1]))) : (((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_0 + 1])))))));
                var_14 = ((/* implicit */unsigned short) max((var_14), (((/* implicit */unsigned short) (!(((((/* implicit */_Bool) arr_2 [i_0] [i_0 - 1] [i_0 + 1])) && (((/* implicit */_Bool) arr_3 [i_0] [i_0 - 1])))))))));
                /* LoopNest 2 */
                for (unsigned char i_2 = 1; i_2 < 16; i_2 += 1) 
                {
                    for (unsigned short i_3 = 0; i_3 < 19; i_3 += 2) 
                    {
                        {
                            arr_10 [i_3] [i_1] [i_1] [i_3] [i_0] |= ((/* implicit */_Bool) ((signed char) ((((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) var_9)) : (((/* implicit */int) arr_8 [(unsigned char)18] [i_1] [i_1] [i_1])))) >> (((((arr_0 [i_2]) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_8))) : (arr_6 [i_0 + 1] [i_0 + 1] [i_3]))) - (12ULL))))));
                            arr_11 [i_0 - 1] [i_1] [(unsigned char)11] [i_2] [i_1] = ((/* implicit */signed char) (((((+(((/* implicit */int) arr_5 [i_0 + 1] [i_1])))) + (2147483647))) << (((min((((/* implicit */unsigned long long int) var_12)), (var_2))) - (278945420ULL)))));
                            var_15 = ((/* implicit */_Bool) max((var_15), (((/* implicit */_Bool) ((((/* implicit */_Bool) max((((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) arr_9 [i_0 - 1] [i_1] [i_2 + 1] [i_3])) : (((/* implicit */int) (_Bool)0)))), ((((_Bool)0) ? (((/* implicit */int) arr_2 [i_0] [i_0] [i_3])) : (((/* implicit */int) var_6))))))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((short) (-(arr_3 [(signed char)11] [i_2 + 1])))))) : (((((-1LL) > (-1LL))) ? (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_9 [15ULL] [i_2 - 1] [(_Bool)1] [i_0])))))) : (min((((/* implicit */unsigned int) arr_5 [i_3] [i_3])), (var_10))))))))));
                            var_16 -= ((/* implicit */_Bool) max(((+(((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) (short)-2837)) : (((/* implicit */int) var_9)))))), (((((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) var_6))) + (var_0)))) ? ((-(((/* implicit */int) (unsigned char)101)))) : ((+(((/* implicit */int) arr_7 [i_0 + 1] [i_3]))))))));
                        }
                    } 
                } 
                arr_12 [i_1] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (~(((/* implicit */int) ((((/* implicit */int) var_5)) < (((/* implicit */int) (_Bool)0)))))))) ? (((((/* implicit */_Bool) max((((/* implicit */signed char) (_Bool)1)), (var_9)))) ? (((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) arr_9 [i_1] [i_1] [15U] [i_0 - 2])))) : (((/* implicit */int) ((_Bool) var_0))))) : (((/* implicit */int) (!(((/* implicit */_Bool) ((arr_8 [i_0 - 1] [15U] [i_0 - 1] [i_0 - 1]) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_5 [i_0] [i_1]))) : (var_10)))))))));
            }
        } 
    } 
    var_17 = ((/* implicit */unsigned long long int) min((((((/* implicit */_Bool) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) (short)2856)) : (((/* implicit */int) var_5))))) ? (((((var_3) + (9223372036854775807LL))) << (((var_12) - (278945420))))) : (max((-30LL), (9223372036854775807LL))))), (((/* implicit */long long int) ((((/* implicit */_Bool) (-(((/* implicit */int) (_Bool)1))))) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) var_5)) : (var_1)))) : ((~(var_7))))))));
    var_18 = ((/* implicit */long long int) min((var_18), (((/* implicit */long long int) (((+(((/* implicit */int) ((_Bool) var_11))))) > (max((((((/* implicit */_Bool) (signed char)14)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (unsigned char)127)))), (((/* implicit */int) (!(((/* implicit */_Bool) 4294967295U))))))))))));
    /* LoopNest 2 */
    for (unsigned int i_4 = 0; i_4 < 22; i_4 += 3) 
    {
        for (unsigned char i_5 = 0; i_5 < 22; i_5 += 3) 
        {
            {
                arr_18 [i_4] [i_5] [(signed char)8] &= ((/* implicit */signed char) max((min((max((((/* implicit */long long int) arr_16 [i_5] [i_4])), (var_3))), (((/* implicit */long long int) (~(((/* implicit */int) arr_15 [i_4]))))))), (((/* implicit */long long int) ((((/* implicit */_Bool) max((((/* implicit */unsigned int) var_8)), (arr_16 [i_4] [i_4])))) ? (((/* implicit */unsigned int) ((/* implicit */int) var_11))) : (((((/* implicit */_Bool) var_0)) ? (arr_16 [i_4] [i_4]) : (arr_16 [i_4] [4ULL]))))))));
                var_19 -= ((/* implicit */_Bool) max((max(((+(var_12))), (((/* implicit */int) ((((/* implicit */_Bool) var_0)) || (((/* implicit */_Bool) var_8))))))), (min((((/* implicit */int) ((signed char) var_3))), ((((_Bool)1) ? (((/* implicit */int) (unsigned char)0)) : (((/* implicit */int) arr_14 [2ULL]))))))));
                /* LoopNest 2 */
                for (_Bool i_6 = 1; i_6 < 1; i_6 += 1) 
                {
                    for (int i_7 = 1; i_7 < 20; i_7 += 4) 
                    {
                        {
                            var_20 -= ((/* implicit */_Bool) min((((/* implicit */unsigned long long int) (+(((/* implicit */int) (unsigned char)42))))), (((unsigned long long int) var_6))));
                            var_21 = ((/* implicit */signed char) min((var_21), (((/* implicit */signed char) ((((/* implicit */_Bool) (~(((/* implicit */int) min((((/* implicit */unsigned char) arr_14 [2])), (var_4))))))) ? (((/* implicit */int) ((signed char) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */long long int) var_7)) : (var_3))))) : (((/* implicit */int) ((short) ((11243950737230546698ULL) < (((/* implicit */unsigned long long int) var_3)))))))))));
                        }
                    } 
                } 
                var_22 = ((/* implicit */int) (((((!(((/* implicit */_Bool) var_11)))) ? (((/* implicit */long long int) ((/* implicit */int) ((unsigned char) var_3)))) : (((((/* implicit */long long int) var_0)) % (var_3))))) ^ (((/* implicit */long long int) max((((unsigned int) arr_21 [i_5] [i_5])), (((/* implicit */unsigned int) ((unsigned char) arr_20 [i_4] [i_5] [i_5]))))))));
            }
        } 
    } 
}
