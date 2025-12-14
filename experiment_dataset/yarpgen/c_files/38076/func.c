/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 38076
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=38076 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/38076
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
    var_11 = ((((((/* implicit */int) (unsigned char)41)) >= (((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) (signed char)126)) : (((/* implicit */int) var_2)))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_4))) : (var_6));
    /* LoopSeq 1 */
    for (short i_0 = 0; i_0 < 16; i_0 += 4) 
    {
        /* LoopSeq 2 */
        for (unsigned int i_1 = 3; i_1 < 12; i_1 += 3) 
        {
            var_12 = ((/* implicit */_Bool) ((var_1) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) arr_2 [i_1 + 3] [i_1 - 1] [i_1 + 2]))));
            /* LoopSeq 4 */
            for (signed char i_2 = 0; i_2 < 16; i_2 += 3) 
            {
                /* LoopNest 2 */
                for (short i_3 = 3; i_3 < 15; i_3 += 4) 
                {
                    for (unsigned char i_4 = 0; i_4 < 16; i_4 += 2) 
                    {
                        {
                            var_13 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_8)) ? (((((/* implicit */int) (unsigned char)16)) << (((var_6) - (9469290509793306126ULL))))) : (((/* implicit */int) ((_Bool) (short)20706)))))) ? ((-(((((/* implicit */_Bool) -1829494569)) ? (((/* implicit */int) (_Bool)1)) : (1643209921))))) : ((~(((/* implicit */int) (short)32751))))));
                            var_14 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (-(((/* implicit */int) ((_Bool) arr_1 [i_1])))))) ? (((((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) (unsigned char)215))) != (7666882802284195236LL)))) / (((/* implicit */int) (unsigned char)96)))) : (((/* implicit */int) ((_Bool) var_0)))));
                        }
                    } 
                } 
                var_15 = ((/* implicit */_Bool) min((var_15), (((/* implicit */_Bool) var_7))));
            }
            for (unsigned long long int i_5 = 1; i_5 < 12; i_5 += 4) /* same iter space */
            {
                /* LoopSeq 1 */
                /* vectorizable */
                for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
                {
                    arr_16 [i_5 + 2] [i_1] [i_0] = ((/* implicit */unsigned short) ((arr_9 [i_0] [i_5 + 1] [i_5 + 4]) ? (((/* implicit */int) arr_9 [i_0] [i_5 + 1] [i_5])) : (((/* implicit */int) var_2))));
                    var_16 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (short)32751)) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)-127))) : (-1LL)));
                }
                var_17 -= ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((unsigned int) (_Bool)1))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) max((arr_2 [i_0] [i_0] [i_0]), (((/* implicit */short) arr_3 [i_5] [i_1] [(_Bool)1])))))) : ((((_Bool)0) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)214))) : (var_9)))))) ? (min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_15 [i_1 + 4] [i_0] [i_1 + 4] [i_0])) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) var_4))))), (((((/* implicit */_Bool) (unsigned char)215)) ? (18446744073709551615ULL) : (18446744073709551615ULL))))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_12 [i_5 + 2] [i_1] [i_1 + 2])) ? (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) 3258829965101726429ULL)) && ((_Bool)0))))) : (7664511309215875293LL))))));
                arr_17 [i_0] [0ULL] [i_0] [i_5] = ((/* implicit */_Bool) arr_5 [7U] [i_5]);
            }
            for (unsigned long long int i_7 = 1; i_7 < 12; i_7 += 4) /* same iter space */
            {
                var_18 = ((/* implicit */unsigned short) var_5);
                /* LoopSeq 1 */
                for (_Bool i_8 = 0; i_8 < 0; i_8 += 1) 
                {
                    var_19 = ((/* implicit */long long int) ((((((/* implicit */_Bool) -1643209920)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1)))) == (((/* implicit */int) (signed char)123))));
                    var_20 *= ((/* implicit */unsigned long long int) 7666882802284195236LL);
                    arr_23 [i_0] [i_0] [i_7] [i_7 + 3] [i_7] = ((/* implicit */unsigned int) (signed char)50);
                    var_21 ^= ((/* implicit */unsigned long long int) (_Bool)1);
                }
                var_22 = ((/* implicit */unsigned char) min((var_22), (((/* implicit */unsigned char) (-(((((/* implicit */_Bool) var_6)) ? (((((/* implicit */_Bool) 2450296644U)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) var_5)))) : (((/* implicit */int) arr_19 [i_1 + 2] [i_7 + 3])))))))));
                arr_24 [i_0] [i_7] [i_7] [i_7] = ((/* implicit */unsigned long long int) ((unsigned short) max((((/* implicit */int) var_3)), (-1643209922))));
            }
            for (unsigned long long int i_9 = 1; i_9 < 12; i_9 += 4) /* same iter space */
            {
                var_23 -= ((/* implicit */signed char) ((((/* implicit */_Bool) ((long long int) ((((/* implicit */int) (signed char)114)) != (((/* implicit */int) (signed char)119)))))) ? (((/* implicit */int) var_4)) : ((-(((((/* implicit */int) var_4)) * (((/* implicit */int) arr_9 [i_0] [i_1 + 4] [i_9 - 1]))))))));
                var_24 = ((/* implicit */_Bool) max((var_24), ((!(((((/* implicit */unsigned int) ((/* implicit */int) var_3))) > (3306603023U)))))));
                var_25 *= ((/* implicit */_Bool) arr_25 [i_1 + 2] [i_1 + 4]);
            }
            var_26 = ((/* implicit */signed char) ((0LL) / (((/* implicit */long long int) ((/* implicit */int) (_Bool)1)))));
        }
        /* vectorizable */
        for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) 
        {
            var_27 -= ((/* implicit */_Bool) ((((/* implicit */unsigned int) ((((/* implicit */int) var_4)) + (((/* implicit */int) var_8))))) - (((((/* implicit */unsigned int) ((/* implicit */int) (short)(-32767 - 1)))) + (615434429U)))));
            arr_31 [i_10] = ((/* implicit */long long int) ((var_4) && (((/* implicit */_Bool) arr_12 [i_10] [i_10] [i_10]))));
        }
        var_28 = ((/* implicit */long long int) min((var_28), (((/* implicit */long long int) var_3))));
        var_29 = arr_15 [i_0] [i_0] [i_0] [i_0];
        arr_32 [8U] [13U] = ((/* implicit */_Bool) min((((/* implicit */int) var_1)), ((~(((/* implicit */int) arr_4 [i_0] [i_0] [i_0]))))));
        var_30 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (~(1U)))) ? (((((/* implicit */_Bool) var_0)) ? (-7666882802284195237LL) : (((/* implicit */long long int) ((/* implicit */int) var_10))))) : (((((/* implicit */_Bool) 71776119061217280ULL)) ? (-3560385656374650264LL) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1)))))))) ? (((/* implicit */int) ((signed char) var_8))) : (((/* implicit */int) min((((/* implicit */short) arr_4 [i_0] [i_0] [i_0])), (var_5))))));
    }
    var_31 = ((/* implicit */_Bool) var_0);
}
