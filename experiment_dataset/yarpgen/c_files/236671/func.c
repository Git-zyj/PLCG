/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 236671
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=236671 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/236671
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
    var_18 = ((/* implicit */unsigned short) min((((/* implicit */unsigned long long int) min(((-(((/* implicit */int) var_6)))), (((/* implicit */int) min(((short)32754), (((/* implicit */short) var_6)))))))), (18446744073709551613ULL)));
    var_19 = ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) ((((/* implicit */int) var_17)) | (((/* implicit */int) (signed char)126))))) ? (var_16) : (((/* implicit */int) ((unsigned short) var_6))))) * ((~(((/* implicit */int) var_17))))));
    var_20 = ((/* implicit */unsigned long long int) (+(((/* implicit */int) (!(((/* implicit */_Bool) min((var_11), (((/* implicit */unsigned short) var_13))))))))));
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 10; i_0 += 2) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                /* LoopNest 2 */
                for (short i_2 = 1; i_2 < 12; i_2 += 3) 
                {
                    for (long long int i_3 = 3; i_3 < 13; i_3 += 4) 
                    {
                        {
                            arr_11 [i_3 - 2] [i_2] [i_0 + 4] [i_0 + 4] = ((/* implicit */long long int) min((((((/* implicit */_Bool) 2557205977509928571ULL)) ? (((/* implicit */unsigned long long int) 3917460033U)) : (18446744073709551613ULL))), (((((/* implicit */_Bool) arr_3 [i_1] [i_2 + 1])) ? (arr_3 [i_0] [i_2 - 1]) : (arr_3 [i_1] [i_2 + 1])))));
                            var_21 = ((/* implicit */unsigned char) var_17);
                            arr_12 [i_0] [i_1] [i_2 + 2] [i_3] = ((/* implicit */unsigned long long int) var_6);
                        }
                    } 
                } 
                arr_13 [i_1] [i_1] [i_0] = ((/* implicit */long long int) min((((unsigned long long int) arr_0 [i_0] [i_0])), (((/* implicit */unsigned long long int) (-(arr_2 [i_0] [i_0 + 3] [i_0 - 1]))))));
                var_22 = ((/* implicit */unsigned long long int) (~((~((~(-5304397155044364987LL)))))));
                var_23 = (+(((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_7 [i_0 + 3] [i_1]))) > (((((/* implicit */_Bool) arr_1 [i_0] [i_0])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_6))) : (var_5)))))));
                /* LoopSeq 1 */
                for (signed char i_4 = 0; i_4 < 14; i_4 += 4) 
                {
                    /* LoopSeq 2 */
                    for (unsigned char i_5 = 3; i_5 < 11; i_5 += 3) /* same iter space */
                    {
                        var_24 = ((/* implicit */int) ((unsigned short) min((((/* implicit */unsigned short) ((signed char) var_11))), (var_1))));
                        /* LoopSeq 2 */
                        for (unsigned long long int i_6 = 3; i_6 < 11; i_6 += 2) 
                        {
                            var_25 = min((arr_2 [i_0] [i_0] [i_0 - 1]), (((/* implicit */long long int) (~(((/* implicit */int) arr_0 [i_4] [i_4]))))));
                            var_26 = ((/* implicit */signed char) arr_1 [i_6] [i_4]);
                        }
                        for (unsigned char i_7 = 0; i_7 < 14; i_7 += 3) 
                        {
                            var_27 = ((/* implicit */short) ((arr_4 [i_7]) - (((/* implicit */long long int) ((/* implicit */int) min((min(((unsigned char)72), (((/* implicit */unsigned char) (signed char)85)))), (((/* implicit */unsigned char) var_13))))))));
                            var_28 = ((/* implicit */unsigned short) min((var_28), (var_11)));
                        }
                    }
                    for (unsigned char i_8 = 3; i_8 < 11; i_8 += 3) /* same iter space */
                    {
                        /* LoopSeq 1 */
                        for (unsigned char i_9 = 0; i_9 < 14; i_9 += 4) 
                        {
                            var_29 = ((/* implicit */unsigned long long int) min((((/* implicit */long long int) arr_16 [i_0])), (((long long int) min((((/* implicit */unsigned long long int) 2640849395U)), (12ULL))))));
                            arr_30 [i_0] [5] [i_1] [i_4] [i_4] [5] [i_9] = ((/* implicit */signed char) (~(((((/* implicit */_Bool) var_16)) ? ((~(((/* implicit */int) arr_28 [i_0] [i_4])))) : (arr_1 [i_0 - 1] [i_8 - 2])))));
                        }
                        var_30 *= ((/* implicit */unsigned char) min((((/* implicit */unsigned short) (!(((/* implicit */_Bool) arr_22 [i_0 + 2] [i_0 - 1] [i_0 + 1] [i_0 + 4] [i_0] [i_8 - 2]))))), (arr_22 [i_0 + 2] [i_0 + 3] [i_0] [i_0 + 4] [i_4] [i_8 + 2])));
                    }
                    arr_31 [i_0] [i_0] [i_0 - 1] [i_0] = ((((/* implicit */int) arr_7 [i_0 + 3] [i_4])) - (((((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) arr_6 [i_0] [i_1] [i_4] [i_4]))) + (arr_25 [i_0 + 1] [i_0] [i_0] [i_0 + 1] [i_0 + 4])))) ? ((+(((/* implicit */int) var_11)))) : ((+(((/* implicit */int) var_0)))))));
                }
            }
        } 
    } 
    var_31 = ((/* implicit */short) ((((/* implicit */unsigned long long int) (((((~(var_14))) + (2147483647))) >> (((((/* implicit */int) ((unsigned short) var_16))) - (21517)))))) > (min((((((/* implicit */_Bool) (unsigned char)59)) ? (((/* implicit */unsigned long long int) var_12)) : (7034012471593800772ULL))), (min((var_9), (var_3)))))));
}
