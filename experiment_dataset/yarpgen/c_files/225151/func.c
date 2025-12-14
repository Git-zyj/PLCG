/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 225151
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=225151 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/225151
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
    /* LoopSeq 1 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        /* LoopSeq 1 */
        for (int i_1 = 0; i_1 < 18; i_1 += 3) 
        {
            var_10 = ((/* implicit */long long int) 2578788959U);
            /* LoopSeq 3 */
            for (short i_2 = 0; i_2 < 18; i_2 += 2) 
            {
                arr_9 [i_1] [i_0] [i_2] |= ((/* implicit */unsigned long long int) var_2);
                var_11 = ((/* implicit */signed char) (((!(((/* implicit */_Bool) (~(arr_2 [i_0])))))) ? (max((((/* implicit */unsigned long long int) ((int) (_Bool)1))), (((((/* implicit */_Bool) (signed char)12)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_3))) : (126376954326165873ULL))))) : (((/* implicit */unsigned long long int) 31LL))));
                /* LoopSeq 2 */
                for (int i_3 = 1; i_3 < 16; i_3 += 4) /* same iter space */
                {
                    var_12 += ((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */unsigned long long int) min((1716178344U), (((/* implicit */unsigned int) (_Bool)1))))) != (((((/* implicit */_Bool) var_3)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) : (3627823479705941921ULL))))))) + (((((/* implicit */_Bool) var_6)) ? (2578788959U) : (((/* implicit */unsigned int) min((-2098309431), (((/* implicit */int) arr_5 [5ULL])))))))));
                    arr_12 [i_0] [i_1] [(unsigned char)17] [i_3] = ((/* implicit */unsigned short) ((((_Bool) ((((/* implicit */_Bool) 2578788972U)) ? (((/* implicit */unsigned int) 1887781537)) : (1716178336U)))) || (((/* implicit */_Bool) min((((((/* implicit */_Bool) var_7)) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) : (1343172226U))), (((((/* implicit */_Bool) arr_4 [i_1] [i_1] [(signed char)0])) ? (1343172226U) : (2951795070U))))))));
                }
                for (int i_4 = 1; i_4 < 16; i_4 += 4) /* same iter space */
                {
                    var_13 = ((/* implicit */long long int) ((var_6) | (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_2 [i_1])) ? (((/* implicit */long long int) 1343172226U)) : (var_9)))) ? (((((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)(-127 - 1)))) * (var_6))) : (((/* implicit */unsigned long long int) ((((/* implicit */int) (short)26363)) - (((/* implicit */int) arr_3 [i_0] [i_0])))))))));
                    /* LoopSeq 3 */
                    for (short i_5 = 0; i_5 < 18; i_5 += 2) 
                    {
                        var_14 = ((/* implicit */signed char) max((var_14), (((/* implicit */signed char) ((((/* implicit */_Bool) (-(((/* implicit */int) arr_16 [i_4 - 1] [i_1] [i_4 - 1] [i_1]))))) && (((/* implicit */_Bool) (+(var_9)))))))));
                        arr_20 [i_0] [i_1] [i_2] [i_4 - 1] [i_4 + 1] [i_5] [0ULL] = ((/* implicit */signed char) ((unsigned long long int) ((((/* implicit */int) var_7)) / (arr_18 [i_4] [i_5]))));
                    }
                    for (unsigned long long int i_6 = 0; i_6 < 18; i_6 += 4) 
                    {
                        var_15 = ((/* implicit */unsigned char) ((signed char) (~((~(((/* implicit */int) arr_19 [i_0] [(signed char)15] [4ULL] [i_4] [i_6])))))));
                        var_16 = min((((_Bool) ((((/* implicit */_Bool) var_7)) ? (arr_6 [14] [14]) : (var_9)))), (((_Bool) (~(1494612306U)))));
                    }
                    /* vectorizable */
                    for (int i_7 = 0; i_7 < 18; i_7 += 4) 
                    {
                        arr_25 [i_4] [i_4] [i_4] [i_4] [0LL] = ((/* implicit */int) ((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) 2951795092U)) && (((/* implicit */_Bool) 2578788960U)))))) : (((((/* implicit */_Bool) 1887781537)) ? (((/* implicit */unsigned int) var_5)) : (1716178336U)))));
                        arr_26 [8LL] [(unsigned short)0] [(unsigned short)0] [i_1] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) 0)) ? ((((_Bool)1) ? (((/* implicit */unsigned long long int) 1716178339U)) : (4665902809897729650ULL))) : (((/* implicit */unsigned long long int) 2951795070U))));
                    }
                    arr_27 [i_0] [i_1] [(short)12] [i_2] [i_4 - 1] [i_4 + 1] = ((/* implicit */signed char) ((((/* implicit */_Bool) var_7)) ? (((unsigned long long int) ((unsigned long long int) (_Bool)0))) : (((unsigned long long int) arr_4 [i_0] [i_4] [i_2]))));
                }
                arr_28 [i_0] [i_1] [i_1] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */unsigned int) -1892313759)) + (1167153861U)))) ? (((unsigned long long int) var_9)) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((_Bool) max((((/* implicit */long long int) (signed char)-66)), (var_2))))))));
            }
            for (unsigned long long int i_8 = 0; i_8 < 18; i_8 += 4) 
            {
                var_17 = ((/* implicit */signed char) (_Bool)0);
                arr_33 [i_1] [i_1] [i_1] = ((/* implicit */short) ((long long int) 4753103859247214015LL));
                /* LoopSeq 4 */
                /* vectorizable */
                for (unsigned short i_9 = 1; i_9 < 14; i_9 += 3) 
                {
                    arr_36 [i_0] [i_0] [i_0] [i_1] [i_8] [i_9] |= ((/* implicit */_Bool) var_2);
                    var_18 &= ((/* implicit */unsigned char) (((-(((/* implicit */int) (unsigned char)247)))) <= (((((/* implicit */int) var_8)) * (((/* implicit */int) (unsigned char)27))))));
                    var_19 = ((/* implicit */unsigned int) min((var_19), (((/* implicit */unsigned int) ((((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */unsigned int) var_5)) == (3127813435U))))) & (arr_23 [i_9] [i_9] [i_9 + 3] [i_9] [i_9 + 4]))))));
                }
                for (_Bool i_10 = 0; i_10 < 0; i_10 += 1) 
                {
                    arr_39 [i_0] = var_1;
                    arr_40 [i_0] [i_1] [i_1] = ((/* implicit */unsigned short) ((_Bool) 1391490626));
                    var_20 = ((/* implicit */int) ((unsigned char) ((signed char) ((((/* implicit */long long int) ((/* implicit */int) var_7))) >= (var_9)))));
                    arr_41 [(_Bool)1] [7LL] [i_8] [i_1] [i_1] [i_0] &= ((/* implicit */signed char) ((((/* implicit */_Bool) (signed char)-70)) ? (((/* implicit */unsigned int) 0)) : (2951795070U)));
                    var_21 = ((/* implicit */unsigned short) var_2);
                }
                for (int i_11 = 1; i_11 < 16; i_11 += 3) 
                {
                    var_22 = ((/* implicit */unsigned char) max((var_22), (((/* implicit */unsigned char) (+((-(((/* implicit */int) ((12015106885677502653ULL) <= (((/* implicit */unsigned long long int) var_5))))))))))));
                    var_23 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 10)) ? ((+(((/* implicit */int) var_7)))) : (((int) 1343172218U))));
                }
                for (unsigned char i_12 = 3; i_12 < 17; i_12 += 2) 
                {
                    arr_50 [i_0] [i_0] [i_0] [i_0] [i_12] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((-5345224650215438611LL) + (9223372036854775807LL))) >> (((/* implicit */int) (_Bool)1))))) ? (max((((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) (_Bool)1)) : (var_5))), (((/* implicit */int) var_3)))) : ((~(((/* implicit */int) var_1))))));
                    var_24 = ((/* implicit */long long int) var_4);
                }
            }
            for (_Bool i_13 = 0; i_13 < 1; i_13 += 1) 
            {
                arr_53 [i_0] [0ULL] [(_Bool)1] = ((((/* implicit */_Bool) ((signed char) (-(var_6))))) ? ((~(((/* implicit */int) ((-4923743968586255692LL) >= (((/* implicit */long long int) 119729323))))))) : ((~(((/* implicit */int) (unsigned char)2)))));
                var_25 = ((/* implicit */long long int) (signed char)-91);
                var_26 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_5 [i_13])) ? (arr_47 [i_0] [i_0] [i_0] [i_0]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_5 [i_0])))))) || (((((/* implicit */_Bool) arr_5 [i_13])) || (((/* implicit */_Bool) var_6))))));
                var_27 ^= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (((~(((/* implicit */int) arr_37 [i_0] [i_0] [i_0] [i_0] [i_0])))) << (((((((/* implicit */_Bool) 9222809086901354496LL)) ? (((/* implicit */int) var_7)) : (((/* implicit */int) (unsigned short)45903)))) + (127)))))) ? ((~(((/* implicit */int) ((((/* implicit */unsigned long long int) -5274850252656227828LL)) >= (var_0)))))) : (((arr_15 [i_0] [i_0] [i_0]) ? (((/* implicit */int) arr_15 [i_0] [i_1] [i_13])) : (0)))));
                arr_54 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */long long int) ((unsigned long long int) (unsigned short)27870));
            }
        }
        var_28 = (+(((/* implicit */int) ((signed char) -8948024665680368546LL))));
        var_29 ^= ((/* implicit */int) ((((/* implicit */int) (!((!(((/* implicit */_Bool) var_2))))))) <= (((/* implicit */int) ((signed char) (_Bool)1)))));
    }
    /* LoopNest 2 */
    for (long long int i_14 = 0; i_14 < 25; i_14 += 4) 
    {
        for (int i_15 = 0; i_15 < 25; i_15 += 1) 
        {
            {
                var_30 = ((/* implicit */int) (short)-411);
                var_31 = ((/* implicit */signed char) max((var_31), (((/* implicit */signed char) ((((/* implicit */_Bool) ((-25) | (((/* implicit */int) arr_57 [i_14]))))) ? (((/* implicit */int) var_7)) : (((/* implicit */int) ((unsigned char) (-(var_6))))))))));
            }
        } 
    } 
    var_32 = ((/* implicit */signed char) var_0);
    var_33 = ((/* implicit */signed char) 3127813435U);
    var_34 = ((/* implicit */int) ((max((((/* implicit */unsigned long long int) var_5)), (((((/* implicit */_Bool) 1970033231652716010ULL)) ? (var_6) : (((/* implicit */unsigned long long int) 1167153861U)))))) >= (((unsigned long long int) var_9))));
}
