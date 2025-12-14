/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 244464
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=244464 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/244464
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
    /* LoopSeq 4 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        /* LoopSeq 1 */
        for (unsigned int i_1 = 0; i_1 < 19; i_1 += 2) 
        {
            /* LoopSeq 3 */
            for (unsigned char i_2 = 3; i_2 < 18; i_2 += 3) 
            {
                arr_9 [i_0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_1]))) != (arr_5 [i_1] [i_0])))), (((((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_0] [i_2 - 2]))) % (13215277950830726155ULL)))))) ? (((/* implicit */unsigned long long int) min((((/* implicit */long long int) arr_1 [i_0])), (-2674466123204056509LL)))) : (min((((/* implicit */unsigned long long int) min((2674466123204056501LL), (((/* implicit */long long int) arr_8 [i_0] [i_1] [i_2] [i_1]))))), (arr_2 [i_2 - 2] [i_2 + 1] [i_0])))));
                var_10 = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) ((short) arr_6 [i_0] [i_2 + 1]))) ? (12296492129066273911ULL) : (arr_2 [i_0] [i_1] [i_0]))) & (((/* implicit */unsigned long long int) arr_5 [i_2 + 1] [i_2 - 3]))));
                arr_10 [i_0] [i_1] [i_0] [i_0] = ((/* implicit */unsigned char) 6150251944643277705ULL);
                arr_11 [i_0] [i_1] [i_0] [i_1] = ((/* implicit */signed char) (short)-2970);
            }
            /* vectorizable */
            for (short i_3 = 3; i_3 < 18; i_3 += 3) 
            {
                arr_14 [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_2 [i_3 + 1] [i_3] [i_0])) ? (arr_2 [i_3 - 2] [i_3 - 2] [i_0]) : (((/* implicit */unsigned long long int) arr_13 [i_3 + 1] [i_3 + 1] [i_0]))));
                arr_15 [i_0] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((unsigned short) (-9223372036854775807LL - 1LL)))) ? (((((/* implicit */_Bool) var_3)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_0] [i_0]))) : (arr_13 [i_0] [i_1] [i_0]))) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) (short)24487)) ? (((/* implicit */int) (signed char)-106)) : (((/* implicit */int) arr_3 [i_0] [i_0])))))));
                arr_16 [i_0] [i_1] [i_3 - 1] [i_3 - 1] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_1]))) : (arr_12 [i_0] [i_0] [i_0] [i_1])))) ? (((/* implicit */long long int) arr_5 [i_0] [i_1])) : (((arr_8 [i_1] [i_1] [i_0] [i_0]) ? (((/* implicit */long long int) arr_13 [i_0] [i_0] [i_0])) : (2674466123204056505LL)))));
            }
            for (signed char i_4 = 2; i_4 < 15; i_4 += 2) 
            {
                var_11 = ((unsigned int) min((arr_13 [i_4 - 1] [i_4 + 4] [i_0]), (((/* implicit */unsigned int) arr_8 [i_4 - 1] [i_4 + 4] [i_4 - 1] [i_4 + 1]))));
                var_12 = ((/* implicit */unsigned char) ((((((/* implicit */int) arr_17 [i_0] [i_4 + 1] [i_4 + 2])) - (((/* implicit */int) arr_3 [i_0] [i_4 + 2])))) == (((/* implicit */int) arr_8 [i_4 - 2] [i_4 - 2] [i_4 - 2] [i_4 - 2]))));
            }
            var_13 = ((/* implicit */short) ((arr_5 [i_0] [i_1]) <= (((/* implicit */unsigned int) ((/* implicit */int) max((arr_1 [i_0]), ((signed char)118)))))));
        }
        var_14 = ((/* implicit */long long int) (+(max((min((arr_12 [(unsigned short)4] [i_0] [i_0] [(unsigned short)4]), (((/* implicit */unsigned long long int) var_3)))), (((/* implicit */unsigned long long int) min((((/* implicit */unsigned char) arr_3 [(signed char)6] [(signed char)6])), ((unsigned char)42))))))));
        var_15 = ((/* implicit */unsigned int) (short)-22768);
        var_16 = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) 2674466123204056515LL)) ? (1348581301464443173LL) : (2674466123204056505LL))) == (max((((/* implicit */long long int) (short)-22768)), (-3002224379015943916LL)))));
    }
    for (signed char i_5 = 0; i_5 < 18; i_5 += 4) 
    {
        var_17 = ((/* implicit */unsigned short) max((var_17), (((/* implicit */unsigned short) arr_8 [i_5] [i_5] [i_5] [i_5]))));
        arr_24 [i_5] = ((/* implicit */short) max((var_8), (((((/* implicit */unsigned long long int) ((long long int) arr_20 [i_5]))) & (var_1)))));
    }
    for (int i_6 = 4; i_6 < 11; i_6 += 1) 
    {
        arr_27 [i_6] = ((/* implicit */signed char) min((arr_21 [i_6]), (((/* implicit */unsigned short) ((signed char) -1162302665)))));
        arr_28 [i_6] [i_6] = ((/* implicit */short) ((long long int) min((((/* implicit */long long int) (signed char)122)), (647217597238832016LL))));
        var_18 -= ((/* implicit */unsigned int) arr_0 [i_6] [i_6 + 2]);
        var_19 &= ((/* implicit */unsigned char) max((((/* implicit */unsigned long long int) ((_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) > (5ULL))))), (7207091898568924235ULL)));
    }
    for (long long int i_7 = 0; i_7 < 16; i_7 += 1) 
    {
        arr_32 [i_7] = ((/* implicit */signed char) min((((/* implicit */unsigned short) min((arr_19 [i_7]), (((((/* implicit */int) var_6)) > (((/* implicit */int) arr_3 [(signed char)14] [i_7]))))))), (arr_0 [i_7] [i_7])));
        var_20 = ((/* implicit */_Bool) min((var_20), (((/* implicit */_Bool) ((arr_19 [i_7]) ? (min(((-(8540049888827641018LL))), (((/* implicit */long long int) arr_8 [i_7] [i_7] [i_7] [i_7])))) : (((((/* implicit */_Bool) (signed char)-106)) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)122))) : (4559753269136218707LL))))))));
        var_21 = ((/* implicit */signed char) min((var_21), (((/* implicit */signed char) ((int) (short)15695)))));
    }
    var_22 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_0)) ? ((-(6150251944643277704ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) var_0)) && ((_Bool)0)))))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned char)254)) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)109))) : (-864082716657246691LL)))) : (((((/* implicit */_Bool) ((long long int) (signed char)34))) ? (((/* implicit */unsigned long long int) -1)) : (((var_1) - (((/* implicit */unsigned long long int) 1073737728))))))));
}
