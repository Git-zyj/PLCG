/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 236437
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=236437 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/236437
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
    /* LoopSeq 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) /* same iter space */
    {
        arr_2 [(signed char)22] [i_0] = ((/* implicit */unsigned short) arr_1 [i_0]);
        /* LoopSeq 3 */
        for (signed char i_1 = 2; i_1 < 22; i_1 += 2) 
        {
            /* LoopNest 2 */
            for (short i_2 = 1; i_2 < 23; i_2 += 2) 
            {
                for (unsigned short i_3 = 4; i_3 < 23; i_3 += 4) 
                {
                    {
                        arr_12 [i_0] [i_1] [i_2] [i_3] = ((/* implicit */int) 3138624974U);
                        arr_13 [i_0] [i_1] [8ULL] = ((/* implicit */short) (!(((/* implicit */_Bool) min((arr_3 [i_1 - 1] [i_2 + 1]), (arr_3 [i_1 - 1] [i_2 + 1]))))));
                        var_17 = (-(((/* implicit */int) (signed char)91)));
                        arr_14 [i_3] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((short) (~(5355114565289188089LL))))) ? (((/* implicit */unsigned long long int) min((((/* implicit */long long int) ((unsigned char) arr_7 [i_0] [i_1] [13] [i_3]))), (((((/* implicit */_Bool) -6377935708327607026LL)) ? (-5355114565289188089LL) : (-5355114565289188089LL)))))) : (max((((/* implicit */unsigned long long int) (+(((/* implicit */int) (signed char)-97))))), (max((16ULL), (((/* implicit */unsigned long long int) arr_9 [i_1] [i_1]))))))));
                    }
                } 
            } 
            /* LoopSeq 2 */
            for (unsigned char i_4 = 1; i_4 < 22; i_4 += 4) /* same iter space */
            {
                var_18 = ((/* implicit */int) max((var_18), ((-(-742253031)))));
                var_19 = min((5355114565289188092LL), (((((/* implicit */_Bool) arr_7 [i_1 + 1] [i_4 - 1] [i_4 - 1] [16])) ? (((((/* implicit */_Bool) 5355114565289188099LL)) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)0))) : (-5355114565289188097LL))) : (((/* implicit */long long int) ((/* implicit */int) (short)-12814))))));
            }
            for (unsigned char i_5 = 1; i_5 < 22; i_5 += 4) /* same iter space */
            {
                var_20 = ((/* implicit */short) min((var_20), (((/* implicit */short) ((((/* implicit */_Bool) arr_1 [i_5])) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) arr_9 [i_0] [i_5])))))));
                var_21 = ((/* implicit */unsigned char) ((unsigned short) arr_11 [i_0] [(signed char)12] [i_0] [i_1] [i_1] [i_5]));
                arr_20 [i_0] [i_0] [i_0] [i_5] = ((/* implicit */unsigned char) (~((-(((/* implicit */int) arr_10 [6LL] [6LL] [i_5 - 1] [(unsigned char)3] [i_1 - 2] [i_0]))))));
                arr_21 [(unsigned char)17] [(unsigned char)17] [i_5 + 1] [i_5 + 1] = ((/* implicit */long long int) min(((_Bool)1), ((_Bool)1)));
            }
        }
        for (long long int i_6 = 0; i_6 < 24; i_6 += 4) 
        {
            /* LoopNest 2 */
            for (signed char i_7 = 1; i_7 < 23; i_7 += 3) 
            {
                for (long long int i_8 = 2; i_8 < 22; i_8 += 1) 
                {
                    {
                        var_22 = ((/* implicit */int) min((((/* implicit */unsigned int) (unsigned short)5217)), ((-(((unsigned int) (short)1257))))));
                        var_23 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((int) arr_24 [(short)16] [(unsigned char)18] [i_7]))) ? (((/* implicit */unsigned int) max((((/* implicit */int) arr_19 [i_0] [(unsigned char)15])), (90129454)))) : (((((/* implicit */_Bool) arr_27 [i_0] [i_6] [i_7 - 1] [i_8 - 2] [i_8])) ? (arr_27 [i_6] [i_6] [i_7 + 1] [i_8 + 2] [i_8]) : (arr_27 [(unsigned short)13] [i_6] [i_6] [i_8 - 1] [i_8])))));
                        arr_29 [i_8] = ((/* implicit */_Bool) max(((unsigned char)100), (((/* implicit */unsigned char) (_Bool)0))));
                        arr_30 [i_8] [i_7] [i_8] = ((/* implicit */int) ((((/* implicit */_Bool) (-(arr_27 [i_7] [i_7 + 1] [i_8 + 1] [i_8] [i_8])))) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) max((arr_27 [i_0] [i_6] [i_7] [i_7] [i_8]), (((/* implicit */unsigned int) arr_18 [i_0]))))) ? (((/* implicit */int) arr_22 [i_0] [i_8 - 1])) : ((+(1295450146)))))) : (arr_27 [i_0] [(unsigned short)8] [i_0] [i_0] [i_8])));
                        var_24 = ((/* implicit */unsigned short) min((var_24), (((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)33373)) ? (((/* implicit */int) arr_7 [i_0] [i_6] [i_8] [i_8])) : ((+(((/* implicit */int) (unsigned char)167))))))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */int) arr_0 [i_7 - 1])) : (((/* implicit */int) arr_28 [i_6] [i_6] [i_6] [i_8]))))) : ((-(max((((/* implicit */long long int) arr_19 [(unsigned char)1] [13ULL])), (arr_23 [i_0] [(unsigned short)9] [i_7 + 1]))))))))));
                    }
                } 
            } 
            var_25 ^= ((/* implicit */short) arr_4 [i_6] [(unsigned short)12]);
        }
        for (_Bool i_9 = 1; i_9 < 1; i_9 += 1) 
        {
            var_26 = max((((short) ((_Bool) 1073741823))), (((/* implicit */short) arr_31 [3LL] [3LL] [i_9])));
            var_27 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (signed char)-20)) ? (5355114565289188101LL) : (((/* implicit */long long int) (-2147483647 - 1)))));
            var_28 = ((/* implicit */long long int) ((unsigned int) (+(arr_23 [i_9] [i_9 - 1] [i_9 - 1]))));
        }
    }
    for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) /* same iter space */
    {
        arr_37 [i_10] = ((/* implicit */short) 1378365968);
        var_29 ^= ((/* implicit */short) min((((signed char) arr_1 [i_10])), (((/* implicit */signed char) (!(((/* implicit */_Bool) max((arr_36 [i_10]), (((/* implicit */long long int) arr_7 [i_10] [i_10] [(unsigned char)21] [i_10]))))))))));
        var_30 -= ((/* implicit */unsigned int) (_Bool)0);
    }
    var_31 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_15)) ? (((((/* implicit */_Bool) var_7)) ? (((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) var_13)) : (1811715568))) : (((/* implicit */int) var_8)))) : (((/* implicit */int) var_8))));
}
