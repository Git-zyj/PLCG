/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 191657
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=191657 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/191657
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
        arr_3 [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((arr_1 [i_0] [i_0]) ? (max((((/* implicit */long long int) var_6)), (var_10))) : (((/* implicit */long long int) ((/* implicit */int) var_6)))))) ? (((379607362U) & (((/* implicit */unsigned int) ((/* implicit */int) max((((/* implicit */short) (signed char)(-127 - 1))), ((short)32767))))))) : (((arr_0 [i_0] [i_0]) ^ (((/* implicit */unsigned int) ((/* implicit */int) var_0)))))));
        arr_4 [11U] [i_0] |= ((/* implicit */_Bool) arr_0 [i_0] [i_0]);
        var_11 = ((/* implicit */_Bool) (+(658825523U)));
    }
    var_12 = ((/* implicit */signed char) ((((/* implicit */_Bool) var_1)) ? (var_10) : (((/* implicit */long long int) ((/* implicit */int) ((((var_3) ? (((/* implicit */int) var_0)) : (((/* implicit */int) var_4)))) != (((/* implicit */int) var_1))))))));
    /* LoopSeq 1 */
    for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
    {
        arr_7 [(_Bool)1] |= ((/* implicit */_Bool) var_2);
        /* LoopSeq 2 */
        for (unsigned int i_2 = 3; i_2 < 19; i_2 += 1) 
        {
            /* LoopSeq 1 */
            for (_Bool i_3 = 0; i_3 < 0; i_3 += 1) 
            {
                arr_13 [i_3 + 1] [i_2 + 1] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */int) ((signed char) var_1))) * (((/* implicit */int) arr_6 [(_Bool)1]))))) ? (((/* implicit */int) ((_Bool) var_1))) : ((~(((/* implicit */int) var_1))))));
                /* LoopSeq 3 */
                for (signed char i_4 = 0; i_4 < 20; i_4 += 4) /* same iter space */
                {
                    arr_16 [i_1] [i_2 - 2] [i_3 + 1] [(short)6] = ((/* implicit */unsigned short) min((((int) ((_Bool) arr_5 [i_4]))), (((((/* implicit */int) arr_9 [i_2 + 1] [i_2 - 3])) % (((/* implicit */int) var_2))))));
                    var_13 = ((/* implicit */signed char) ((((/* implicit */_Bool) max(((-(((/* implicit */int) (signed char)75)))), (((int) arr_14 [i_1] [i_3 + 1] [i_3 + 1]))))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)16)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)0))))) ? (min((((/* implicit */unsigned int) (_Bool)1)), (215136552U))) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned char)37)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1))))))) : (((/* implicit */unsigned int) ((/* implicit */int) var_3)))));
                }
                for (signed char i_5 = 0; i_5 < 20; i_5 += 4) /* same iter space */
                {
                    arr_21 [i_2 - 3] [i_3 + 1] [i_5] = ((((/* implicit */int) (_Bool)1)) ^ (((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) ((((/* implicit */int) arr_19 [i_1] [i_2 - 2] [i_3 + 1] [0])) > (((/* implicit */int) var_4))))) : (((((/* implicit */int) (_Bool)1)) >> (((((/* implicit */int) var_7)) + (59))))))));
                    var_14 = (!((((~(((/* implicit */int) var_5)))) > (((/* implicit */int) ((((/* implicit */int) (_Bool)1)) == (((/* implicit */int) var_3))))))));
                }
                for (signed char i_6 = 0; i_6 < 20; i_6 += 4) /* same iter space */
                {
                    arr_24 [i_1] [6LL] [(unsigned char)14] [i_3 + 1] [i_3 + 1] [i_6] = ((/* implicit */signed char) ((unsigned char) (~(((/* implicit */int) (_Bool)1)))));
                    arr_25 [(signed char)12] [i_2 - 2] [i_2 - 1] [i_2 - 1] [i_2 - 3] [i_2 + 1] = ((/* implicit */unsigned short) (((!(var_6))) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_11 [i_3 + 1])) ? (((/* implicit */int) var_9)) : (((((/* implicit */_Bool) 63U)) ? (((/* implicit */int) var_1)) : (((/* implicit */int) var_1))))))) : (((unsigned int) ((long long int) var_7)))));
                }
                var_15 -= ((/* implicit */signed char) ((unsigned int) ((((/* implicit */_Bool) var_1)) ? (arr_12 [i_3 + 1] [i_3 + 1] [i_2 - 1]) : (((/* implicit */int) var_7)))));
                var_16 = ((/* implicit */_Bool) (short)-23356);
                var_17 = ((/* implicit */signed char) min((var_17), (((/* implicit */signed char) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_18 [(signed char)0] [(_Bool)1])) ? (((/* implicit */int) var_0)) : (((/* implicit */int) (signed char)56))))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) arr_22 [i_2 - 3] [i_3 + 1])) : (var_8)))))) ? (min((((long long int) var_4)), (((/* implicit */long long int) ((signed char) var_2))))) : (((/* implicit */long long int) ((/* implicit */int) arr_8 [(signed char)10] [i_2 + 1] [(signed char)18]))))))));
            }
            var_18 ^= ((/* implicit */signed char) min((((/* implicit */short) (unsigned char)59)), ((short)-10186)));
            var_19 &= ((/* implicit */unsigned short) ((((/* implicit */_Bool) min((((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) arr_8 [i_1] [(_Bool)1] [i_1])) : (((/* implicit */int) (_Bool)1)))), (((/* implicit */int) var_3))))) ? (((var_0) ? (((/* implicit */int) arr_15 [i_1] [i_2 - 1] [i_2 - 2] [i_2 - 3])) : (((/* implicit */int) arr_15 [(signed char)10] [i_2 + 1] [i_2 - 1] [i_2 + 1])))) : (((/* implicit */int) arr_15 [i_1] [i_2 + 1] [(unsigned short)17] [(short)8]))));
            arr_26 [i_1] = ((/* implicit */long long int) min(((signed char)56), (((/* implicit */signed char) (_Bool)1))));
        }
        for (unsigned int i_7 = 1; i_7 < 18; i_7 += 1) 
        {
            var_20 = ((/* implicit */long long int) ((((/* implicit */_Bool) (+(((/* implicit */int) ((var_10) >= (((/* implicit */long long int) ((/* implicit */int) var_6))))))))) ? (((/* implicit */int) (!(var_3)))) : (((/* implicit */int) var_4))));
            arr_30 [(signed char)8] = ((/* implicit */unsigned int) max((((((/* implicit */int) var_9)) & (((/* implicit */int) (signed char)-77)))), (((/* implicit */int) var_1))));
            var_21 -= ((/* implicit */_Bool) min((var_10), (((/* implicit */long long int) max((((/* implicit */int) ((short) arr_8 [i_7 + 1] [13U] [i_1]))), (((((/* implicit */_Bool) (signed char)-56)) ? (var_8) : (((/* implicit */int) var_3)))))))));
            arr_31 [i_1] [14] [i_7 + 1] = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) min((((/* implicit */int) var_7)), (var_8)))) ? ((+(var_10))) : (((/* implicit */long long int) ((/* implicit */int) (!(var_0)))))))) ? (((int) ((((/* implicit */_Bool) arr_27 [i_1] [(_Bool)1])) ? (((/* implicit */int) var_0)) : (((/* implicit */int) var_1))))) : (((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */int) var_0)) << (((/* implicit */int) (_Bool)1))))) || (((/* implicit */_Bool) arr_6 [15U])))))));
        }
    }
}
