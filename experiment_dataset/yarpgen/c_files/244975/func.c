/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 244975
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=244975 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/244975
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
    var_19 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min((((((/* implicit */_Bool) var_16)) ? (5601756471697802299ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_12))))), (((/* implicit */unsigned long long int) var_4))))) ? (var_1) : (((/* implicit */unsigned int) (~(min((1023372495), (((/* implicit */int) (unsigned short)6749)))))))));
    var_20 += ((/* implicit */signed char) var_14);
    /* LoopSeq 3 */
    for (unsigned char i_0 = 3; i_0 < 13; i_0 += 1) 
    {
        var_21 = ((/* implicit */signed char) arr_0 [i_0 - 1]);
        /* LoopSeq 3 */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) /* same iter space */
        {
            var_22 = ((/* implicit */short) arr_0 [i_1]);
            arr_5 [i_0] [i_0] [i_1] = ((/* implicit */signed char) ((((((/* implicit */_Bool) max((var_14), (((/* implicit */unsigned char) (_Bool)1))))) ? (((/* implicit */int) ((unsigned short) 3630007570U))) : (((int) var_18)))) >> ((((((-(((/* implicit */int) (signed char)-64)))) ^ (((/* implicit */int) max((var_16), (((/* implicit */unsigned short) arr_3 [i_0]))))))) - (45146)))));
            var_23 = ((/* implicit */_Bool) (signed char)(-127 - 1));
        }
        for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) /* same iter space */
        {
            arr_10 [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) (-(((/* implicit */int) var_18))))) || (((/* implicit */_Bool) max((-727925646), (((/* implicit */int) (unsigned char)87)))))));
            arr_11 [i_0] = ((/* implicit */signed char) (-(((((/* implicit */_Bool) arr_6 [i_0])) ? (max((var_4), (((/* implicit */int) (signed char)-4)))) : (((((/* implicit */int) var_0)) + (((/* implicit */int) arr_1 [i_0] [i_0]))))))));
            arr_12 [i_0] = ((/* implicit */_Bool) min((((/* implicit */long long int) (unsigned short)19904)), (min((((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned short)45623)) ? (((/* implicit */int) (signed char)(-127 - 1))) : (337308652)))), (((((/* implicit */_Bool) var_12)) ? (arr_2 [i_0] [(_Bool)1]) : (((/* implicit */long long int) ((/* implicit */int) (signed char)(-127 - 1))))))))));
        }
        for (short i_3 = 3; i_3 < 12; i_3 += 3) 
        {
            arr_17 [i_0] [i_0] = ((/* implicit */signed char) ((int) (!(((/* implicit */_Bool) min((17126199176134134652ULL), (((/* implicit */unsigned long long int) (_Bool)1))))))));
            arr_18 [i_0] = ((/* implicit */short) ((((/* implicit */unsigned long long int) min((((((/* implicit */_Bool) (unsigned short)6725)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)28866))) : (var_1))), (((/* implicit */unsigned int) arr_15 [i_0] [i_0] [i_3 + 2]))))) * (14318405269696695173ULL)));
            arr_19 [i_0] [i_3] [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)31))) > (((((/* implicit */_Bool) ((((/* implicit */int) arr_16 [i_0] [i_3] [i_3])) | (((/* implicit */int) (short)0))))) ? (var_3) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_16 [i_0 - 3] [i_0 - 3] [i_0 - 3])))))));
        }
        /* LoopSeq 1 */
        for (unsigned long long int i_4 = 0; i_4 < 14; i_4 += 4) 
        {
            var_24 = ((/* implicit */_Bool) ((((/* implicit */_Bool) max((((short) arr_6 [i_0])), (((/* implicit */short) ((((/* implicit */int) (_Bool)1)) < (((/* implicit */int) (signed char)-19)))))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */int) (signed char)60)) + (((/* implicit */int) (unsigned short)6749))))) : (max((2579156567238648421ULL), (((/* implicit */unsigned long long int) 3310594650U))))));
            arr_23 [i_0] = ((((/* implicit */int) (unsigned char)218)) | (((/* implicit */int) (short)2048)));
            arr_24 [i_0] = ((/* implicit */unsigned short) (+(((arr_15 [i_0] [i_4] [(unsigned short)0]) ? (((/* implicit */int) var_12)) : (((/* implicit */int) var_0))))));
            var_25 = ((/* implicit */unsigned char) (~(((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) (unsigned char)7)) && (((/* implicit */_Bool) arr_0 [i_4])))))) > (((((/* implicit */_Bool) arr_4 [(unsigned char)0])) ? (14318405269696695173ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)105))))))))));
        }
    }
    for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
    {
        arr_29 [i_5] = ((/* implicit */signed char) ((_Bool) (-(((/* implicit */int) arr_20 [(unsigned short)0] [i_5] [(unsigned short)0])))));
        var_26 = ((/* implicit */unsigned char) min((var_26), (((/* implicit */unsigned char) ((short) ((((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) arr_7 [i_5] [6LL] [i_5])) : (((/* implicit */int) (_Bool)1)))) < (((/* implicit */int) max((var_14), ((unsigned char)0))))))))));
    }
    /* vectorizable */
    for (signed char i_6 = 0; i_6 < 13; i_6 += 1) 
    {
        var_27 = ((/* implicit */int) ((((/* implicit */int) (_Bool)1)) >= (((/* implicit */int) (_Bool)1))));
        var_28 = ((/* implicit */unsigned int) ((16462387760248597972ULL) - (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_4 [(short)11])) ? (arr_2 [(_Bool)1] [i_6]) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)1031))))))));
    }
}
