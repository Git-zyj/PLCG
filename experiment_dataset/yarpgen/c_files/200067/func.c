/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 200067
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=200067 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/200067
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
    var_19 = ((/* implicit */unsigned int) ((var_5) ? ((+(var_16))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_0)))));
    /* LoopNest 2 */
    for (signed char i_0 = 0; i_0 < 10; i_0 += 4) 
    {
        for (signed char i_1 = 0; i_1 < 10; i_1 += 2) 
        {
            {
                var_20 = ((/* implicit */unsigned char) 742266230521981061LL);
                /* LoopNest 2 */
                for (unsigned int i_2 = 1; i_2 < 9; i_2 += 1) 
                {
                    for (int i_3 = 3; i_3 < 7; i_3 += 1) 
                    {
                        {
                            var_21 = ((/* implicit */unsigned short) min((((/* implicit */int) ((unsigned short) ((((/* implicit */_Bool) var_2)) && (((/* implicit */_Bool) var_11)))))), (((((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_12 [i_3]))) > (arr_5 [i_0] [i_1])))) ^ (((/* implicit */int) arr_1 [i_2]))))));
                            var_22 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_0 [i_2])) ? (((/* implicit */unsigned int) ((((((/* implicit */_Bool) (signed char)65)) ? (((/* implicit */int) var_10)) : (((/* implicit */int) (unsigned short)65192)))) - (((((/* implicit */_Bool) 7535395888813980133ULL)) ? (((/* implicit */int) arr_6 [i_0] [i_3 + 1])) : (((/* implicit */int) arr_8 [i_0] [i_1] [i_2] [i_0]))))))) : (min((((/* implicit */unsigned int) var_14)), (arr_0 [i_2 - 1])))));
                        }
                    } 
                } 
                /* LoopSeq 2 */
                for (unsigned char i_4 = 0; i_4 < 10; i_4 += 3) 
                {
                    var_23 = ((/* implicit */signed char) min((((((/* implicit */_Bool) -742266230521981047LL)) ? (((/* implicit */int) arr_10 [i_0] [i_0] [i_0] [i_0])) : (((/* implicit */int) arr_10 [i_0] [i_1] [i_4] [i_4])))), ((-(((/* implicit */int) var_1))))));
                    var_24 |= ((/* implicit */unsigned char) ((((((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) (unsigned char)136)) != (((/* implicit */int) (unsigned short)6195)))))) > (arr_11 [i_0] [i_1] [i_4] [i_1]))) ? (var_8) : (((/* implicit */unsigned int) ((/* implicit */int) min((var_14), (((/* implicit */unsigned short) ((((/* implicit */int) (signed char)123)) <= (((/* implicit */int) arr_9 [i_4])))))))))));
                    var_25 = ((/* implicit */int) (~(var_6)));
                }
                for (short i_5 = 1; i_5 < 9; i_5 += 4) 
                {
                    var_26 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */int) arr_2 [3ULL] [i_1])) + (((/* implicit */int) var_7))))) ? (((/* implicit */long long int) ((/* implicit */int) var_3))) : (var_18)))) ? ((+((~(7535395888813980124ULL))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_15)))));
                    var_27 ^= ((/* implicit */short) -742266230521981062LL);
                    var_28 = ((/* implicit */unsigned int) max((((/* implicit */unsigned long long int) 4235183338149852208LL)), ((-(((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)173))) ^ (18446744073709551615ULL)))))));
                    arr_18 [i_0] = ((/* implicit */unsigned short) ((((/* implicit */int) ((8658871832785705058LL) >= (((/* implicit */long long int) ((/* implicit */int) (signed char)87)))))) > (((/* implicit */int) (_Bool)0))));
                    var_29 = ((/* implicit */unsigned short) max((((/* implicit */long long int) ((((/* implicit */int) (unsigned short)60482)) | (((/* implicit */int) (_Bool)1))))), (((((/* implicit */_Bool) (unsigned char)55)) ? (((long long int) 3213173117U)) : (((/* implicit */long long int) ((/* implicit */int) arr_4 [i_5 - 1] [i_5 + 1] [i_5 + 1])))))));
                }
            }
        } 
    } 
}
