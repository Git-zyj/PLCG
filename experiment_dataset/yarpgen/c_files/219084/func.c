/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 219084
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=219084 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/219084
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
    for (int i_0 = 0; i_0 < 15; i_0 += 3) 
    {
        for (short i_1 = 1; i_1 < 14; i_1 += 1) 
        {
            {
                /* LoopSeq 4 */
                for (int i_2 = 1; i_2 < 12; i_2 += 4) /* same iter space */
                {
                    var_19 = ((/* implicit */short) (~(((/* implicit */int) var_14))));
                    var_20 = ((/* implicit */unsigned int) (short)-1);
                }
                for (int i_3 = 1; i_3 < 12; i_3 += 4) /* same iter space */
                {
                    /* LoopNest 2 */
                    for (short i_4 = 0; i_4 < 15; i_4 += 2) 
                    {
                        for (short i_5 = 1; i_5 < 11; i_5 += 4) 
                        {
                            {
                                var_21 = ((/* implicit */long long int) (~(((/* implicit */int) var_2))));
                                arr_19 [i_5] [i_4] [i_0] [(_Bool)1] [i_0] = max((((int) arr_10 [(signed char)1] [i_1 + 1] [i_0])), (((/* implicit */int) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 11288473607457873778ULL)) ? (3792480681314708671LL) : (((/* implicit */long long int) -809044353))))) > (max((((/* implicit */unsigned long long int) -3792480681314708672LL)), (1606195182476523604ULL)))))));
                                arr_20 [i_0] [i_3] [(short)14] [i_0] = (!(((/* implicit */_Bool) (-(2147483640)))));
                                arr_21 [i_0] [i_0] [i_0] [i_0] [i_0] = arr_7 [i_0] [i_5 - 1] [i_1 + 1];
                            }
                        } 
                    } 
                    arr_22 [i_1] [(_Bool)1] [i_0] = ((/* implicit */int) 3792480681314708653LL);
                    arr_23 [(short)14] [12ULL] |= ((/* implicit */unsigned int) max(((+(((/* implicit */int) (unsigned short)58332)))), ((+(((((/* implicit */int) var_11)) % (((/* implicit */int) (_Bool)1))))))));
                }
                for (int i_6 = 1; i_6 < 12; i_6 += 4) /* same iter space */
                {
                    arr_26 [i_0] [i_1] [i_0] = ((/* implicit */unsigned long long int) max((min((((/* implicit */long long int) ((((/* implicit */_Bool) -3795333160764588228LL)) ? (((/* implicit */int) (short)-32094)) : (var_6)))), (3792480681314708682LL))), (((/* implicit */long long int) arr_18 [i_0] [i_0] [i_0] [(_Bool)1] [i_0] [(_Bool)1]))));
                    arr_27 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) (+(((((/* implicit */_Bool) (signed char)127)) ? (((/* implicit */int) (signed char)-98)) : (((/* implicit */int) (_Bool)1))))))) ? (((/* implicit */int) ((_Bool) arr_5 [i_0] [i_1 - 1] [i_6]))) : (var_10)));
                    var_22 *= ((/* implicit */short) (-(((/* implicit */int) var_2))));
                    arr_28 [i_0] [i_6] [13U] [i_0] = ((/* implicit */_Bool) ((int) max((((/* implicit */unsigned int) (_Bool)1)), (2374359822U))));
                }
                for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
                {
                    var_23 = ((/* implicit */_Bool) max((((/* implicit */unsigned long long int) (short)3026)), (3300876829816116883ULL)));
                    arr_33 [i_0] [i_0] [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */int) (short)3034)) << (((((/* implicit */int) (unsigned short)65205)) - (65192)))))) ? (((((/* implicit */_Bool) ((long long int) (unsigned short)44145))) ? (((/* implicit */int) (unsigned short)39550)) : (((/* implicit */int) max(((unsigned short)40829), ((unsigned short)61189)))))) : ((~(((/* implicit */int) ((_Bool) (short)3017)))))));
                    var_24 |= ((/* implicit */unsigned short) ((((/* implicit */int) max((((/* implicit */short) arr_25 [6] [6])), (arr_31 [i_1 - 1] [i_1 - 1])))) * ((+(((/* implicit */int) ((unsigned short) var_3)))))));
                    var_25 = (~(((/* implicit */int) (_Bool)1)));
                }
                arr_34 [i_0] = ((/* implicit */int) ((((/* implicit */long long int) arr_18 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0])) / (((long long int) ((((/* implicit */_Bool) -576460752303423488LL)) ? (15145867243893434712ULL) : (((/* implicit */unsigned long long int) 581059247)))))));
                arr_35 [i_0] [i_0] = ((/* implicit */int) ((_Bool) -884127596));
            }
        } 
    } 
    var_26 = ((/* implicit */int) (-(min((((/* implicit */unsigned long long int) var_4)), (max((7286666494243422661ULL), (((/* implicit */unsigned long long int) var_14))))))));
    var_27 = ((/* implicit */_Bool) max((((/* implicit */unsigned int) (signed char)84)), (((((/* implicit */_Bool) var_0)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)7204))) : (1744793598U)))));
}
