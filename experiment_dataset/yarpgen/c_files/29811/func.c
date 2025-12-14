/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 29811
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=29811 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/29811
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
    var_10 = ((/* implicit */unsigned short) min((((((/* implicit */int) (unsigned short)28066)) % (((/* implicit */int) (unsigned short)65510)))), (((((/* implicit */_Bool) ((((/* implicit */int) (unsigned short)65514)) * (((/* implicit */int) var_2))))) ? (((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) (unsigned short)37264)) : (((/* implicit */int) var_9)))) : (((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) var_0)) : (((/* implicit */int) var_3))))))));
    var_11 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (~(((/* implicit */int) var_6))))) ? (((/* implicit */int) var_6)) : (((/* implicit */int) ((unsigned short) ((((/* implicit */int) (unsigned short)0)) & (((/* implicit */int) (unsigned short)65529))))))));
    /* LoopNest 2 */
    for (unsigned short i_0 = 1; i_0 < 23; i_0 += 2) 
    {
        for (unsigned short i_1 = 0; i_1 < 25; i_1 += 4) 
        {
            {
                var_12 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) arr_1 [i_0])) : (((((/* implicit */_Bool) (unsigned short)25)) ? (((/* implicit */int) (unsigned short)7782)) : (((/* implicit */int) var_3))))))) ? (((((/* implicit */_Bool) (+(((/* implicit */int) (unsigned short)65496))))) ? (((/* implicit */int) arr_2 [i_0 + 1])) : (((/* implicit */int) var_3)))) : (((/* implicit */int) ((unsigned short) arr_3 [i_0])))));
                /* LoopNest 2 */
                for (unsigned short i_2 = 0; i_2 < 25; i_2 += 3) 
                {
                    for (unsigned short i_3 = 1; i_3 < 23; i_3 += 1) 
                    {
                        {
                            arr_9 [i_2] [i_0 + 1] [(unsigned short)0] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_3 [i_0])) ? (((/* implicit */int) arr_3 [i_0])) : (((/* implicit */int) arr_3 [i_0]))))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */int) (unsigned short)50593)) : (((/* implicit */int) (unsigned short)51419))))) ? (((((/* implicit */_Bool) (unsigned short)378)) ? (((/* implicit */int) (unsigned short)40263)) : (((/* implicit */int) (unsigned short)34550)))) : (((/* implicit */int) ((((/* implicit */int) var_7)) > (((/* implicit */int) arr_7 [i_1] [i_0]))))))) : (((/* implicit */int) (unsigned short)44719))));
                            var_13 += arr_2 [i_3];
                            arr_10 [i_3] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_8 [i_0])) ? (((/* implicit */int) arr_8 [i_0 + 2])) : (((/* implicit */int) (unsigned short)25273))));
                            var_14 += ((/* implicit */unsigned short) max((((/* implicit */int) (!(((/* implicit */_Bool) arr_5 [i_1] [(unsigned short)4] [i_3]))))), (((((((/* implicit */_Bool) (unsigned short)0)) && (((/* implicit */_Bool) (unsigned short)65528)))) ? (((/* implicit */int) (unsigned short)26)) : (((/* implicit */int) (unsigned short)50819))))));
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (unsigned short i_4 = 1; i_4 < 24; i_4 += 4) 
                {
                    for (unsigned short i_5 = 0; i_5 < 25; i_5 += 4) 
                    {
                        {
                            arr_15 [i_0] [i_0] [i_4] [(unsigned short)10] [i_4] = ((/* implicit */unsigned short) (~(((((((/* implicit */_Bool) arr_6 [i_0])) && (((/* implicit */_Bool) (unsigned short)0)))) ? (((((/* implicit */int) (unsigned short)40263)) * (((/* implicit */int) var_2)))) : (((((/* implicit */int) var_3)) >> (((((/* implicit */int) var_6)) - (59527)))))))));
                            arr_16 [i_0] [i_4 + 1] [i_1] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */int) (unsigned short)5)) & (((/* implicit */int) (unsigned short)14659))));
                            var_15 = ((/* implicit */unsigned short) (+(((((/* implicit */_Bool) arr_13 [i_0] [i_0] [i_0 + 1] [i_0 - 1] [i_4 + 1])) ? (((/* implicit */int) var_7)) : (((/* implicit */int) arr_13 [i_0] [i_0 - 1] [i_0 + 1] [i_0 + 2] [i_4 + 1]))))));
                        }
                    } 
                } 
                arr_17 [i_0] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */int) arr_2 [i_0 - 1])) ^ (((/* implicit */int) ((((/* implicit */int) (unsigned short)32997)) < (((/* implicit */int) (unsigned short)21843)))))))) ? (((/* implicit */int) var_1)) : (((/* implicit */int) ((((/* implicit */int) ((((/* implicit */int) var_4)) > (((/* implicit */int) var_6))))) >= (((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) arr_1 [i_0])))))))));
                var_16 = ((/* implicit */unsigned short) max((var_16), (((/* implicit */unsigned short) ((((/* implicit */_Bool) var_7)) ? (((((/* implicit */_Bool) arr_2 [i_0 - 1])) ? (((/* implicit */int) var_6)) : (((/* implicit */int) var_9)))) : (((((/* implicit */_Bool) arr_2 [i_0 - 1])) ? (((/* implicit */int) arr_2 [i_0 + 1])) : (((/* implicit */int) arr_2 [i_0 - 1])))))))));
            }
        } 
    } 
    var_17 = ((unsigned short) (unsigned short)16350);
    /* LoopSeq 1 */
    for (unsigned short i_6 = 0; i_6 < 14; i_6 += 4) 
    {
        arr_21 [i_6] = (unsigned short)0;
        arr_22 [i_6] = ((/* implicit */unsigned short) (-(((((/* implicit */int) (unsigned short)0)) / (((/* implicit */int) arr_6 [i_6]))))));
        /* LoopSeq 1 */
        for (unsigned short i_7 = 0; i_7 < 14; i_7 += 3) 
        {
            var_18 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)36982)) ? (((/* implicit */int) (unsigned short)0)) : (((/* implicit */int) (unsigned short)65535))))) ? (((((/* implicit */int) arr_7 [i_6] [i_7])) << (((((/* implicit */int) arr_26 [i_6] [i_6] [i_7])) - (19170))))) : (((/* implicit */int) max((arr_7 [i_7] [i_7]), (var_7))))));
            var_19 = ((/* implicit */unsigned short) min((var_19), (((/* implicit */unsigned short) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) (unsigned short)65535)) : (((/* implicit */int) (unsigned short)22))))) ? (((/* implicit */int) arr_13 [i_6] [i_6] [i_6] [i_7] [i_7])) : (((/* implicit */int) (unsigned short)658)))) < (((((/* implicit */_Bool) ((unsigned short) arr_23 [i_6] [i_7] [i_6]))) ? (((((/* implicit */_Bool) (unsigned short)32997)) ? (((/* implicit */int) (unsigned short)62794)) : (((/* implicit */int) (unsigned short)16)))) : (((((/* implicit */_Bool) (unsigned short)64871)) ? (((/* implicit */int) (unsigned short)32997)) : (((/* implicit */int) var_0)))))))))));
        }
        arr_27 [i_6] = arr_18 [i_6] [(unsigned short)7];
    }
}
