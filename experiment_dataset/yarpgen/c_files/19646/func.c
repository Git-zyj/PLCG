/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 19646
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=19646 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/19646
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
    var_13 = ((/* implicit */_Bool) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */long long int) ((((/* implicit */_Bool) (+(var_12)))) ? (((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) var_4)))) : (((/* implicit */int) ((((/* implicit */int) var_8)) == (((/* implicit */int) (unsigned short)2352)))))))) : (min(((+(-1LL))), (((/* implicit */long long int) ((((/* implicit */_Bool) var_12)) ? (-556991110) : (((/* implicit */int) var_6)))))))));
    /* LoopNest 2 */
    for (unsigned char i_0 = 1; i_0 < 24; i_0 += 4) 
    {
        for (int i_1 = 4; i_1 < 24; i_1 += 3) 
        {
            {
                /* LoopNest 2 */
                for (unsigned int i_2 = 0; i_2 < 25; i_2 += 2) 
                {
                    for (signed char i_3 = 3; i_3 < 24; i_3 += 3) 
                    {
                        {
                            var_14 = ((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) - (488194998253340652LL)));
                            var_15 &= ((/* implicit */short) (-(((((/* implicit */int) var_11)) + (((/* implicit */int) var_1))))));
                            arr_11 [i_0 + 1] [i_1] [i_0] = ((/* implicit */int) ((((/* implicit */_Bool) (signed char)16)) && (((/* implicit */_Bool) ((var_11) ? (var_12) : (((/* implicit */int) var_10)))))));
                        }
                    } 
                } 
                arr_12 [i_0] = ((/* implicit */unsigned short) var_12);
                /* LoopSeq 3 */
                /* vectorizable */
                for (signed char i_4 = 2; i_4 < 23; i_4 += 1) 
                {
                    arr_15 [i_0] [(signed char)12] [i_4 + 1] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_10 [i_4] [i_0] [i_0] [i_1 - 2])) ? (((/* implicit */int) var_5)) : (((/* implicit */int) (unsigned char)249))));
                    arr_16 [(unsigned short)21] [i_0] [i_0] = ((/* implicit */signed char) ((unsigned char) var_0));
                    var_16 = ((/* implicit */short) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) arr_0 [i_0] [i_0])) : (((/* implicit */int) arr_0 [i_0] [i_0]))));
                    arr_17 [i_0 + 1] [i_0 + 1] [i_0] [i_4] = ((/* implicit */int) ((((/* implicit */int) (_Bool)1)) == ((-(((/* implicit */int) var_8))))));
                    var_17 = ((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) var_11)) : (((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) var_8)) : (((/* implicit */int) var_7)))));
                }
                for (short i_5 = 0; i_5 < 25; i_5 += 3) /* same iter space */
                {
                    var_18 = ((/* implicit */_Bool) ((((/* implicit */int) ((((/* implicit */_Bool) var_12)) && (((/* implicit */_Bool) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) arr_4 [i_0])) : (((/* implicit */int) (signed char)112)))))))) ^ (min((((((/* implicit */_Bool) 4516357744155488907LL)) ? (((/* implicit */int) var_5)) : (((/* implicit */int) var_8)))), (((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) var_1)) : (var_12)))))));
                    arr_20 [i_5] [i_0] [i_0] = ((/* implicit */long long int) (+(((/* implicit */int) var_5))));
                    arr_21 [i_0] [i_1] [i_0] [i_0] = ((/* implicit */unsigned short) var_2);
                }
                for (short i_6 = 0; i_6 < 25; i_6 += 3) /* same iter space */
                {
                    arr_24 [i_0] = ((/* implicit */unsigned short) (-(((((/* implicit */_Bool) var_4)) ? (((/* implicit */unsigned long long int) ((((/* implicit */int) var_5)) / (((/* implicit */int) var_10))))) : (((((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) + (arr_18 [i_0])))))));
                    var_19 = (i_0 % 2 == 0) ? (((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((var_12) + (2147483647))) << (((arr_6 [i_0]) - (8940685059966113510ULL)))))) ? (((((/* implicit */_Bool) arr_6 [i_0])) ? (arr_6 [i_0]) : (arr_6 [i_0]))) : (((((/* implicit */_Bool) arr_6 [i_0])) ? (arr_6 [i_0]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1)))))))) : (((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((var_12) + (2147483647))) << (((((arr_6 [i_0]) - (8940685059966113510ULL))) - (12146059188726378596ULL)))))) ? (((((/* implicit */_Bool) arr_6 [i_0])) ? (arr_6 [i_0]) : (arr_6 [i_0]))) : (((((/* implicit */_Bool) arr_6 [i_0])) ? (arr_6 [i_0]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))))))));
                }
                arr_25 [i_0] [i_1] [(_Bool)1] &= ((/* implicit */long long int) min((((/* implicit */int) (!(((/* implicit */_Bool) (short)-19100))))), ((~(((((/* implicit */_Bool) var_10)) ? (var_12) : (((/* implicit */int) arr_7 [i_0] [18ULL] [18ULL] [i_0]))))))));
                var_20 = arr_13 [i_1 - 1] [i_0] [i_0] [i_0 - 1];
            }
        } 
    } 
    var_21 = ((/* implicit */long long int) (-(((/* implicit */int) var_9))));
}
