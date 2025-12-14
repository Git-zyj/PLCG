/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 193185
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=193185 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/193185
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
    for (short i_0 = 0; i_0 < 10; i_0 += 3) 
    {
        var_13 = ((/* implicit */short) max((((((/* implicit */_Bool) ((((/* implicit */int) (_Bool)0)) + (var_2)))) ? (((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) arr_0 [i_0])) : (((/* implicit */int) (_Bool)0)))) : ((+(((/* implicit */int) (short)-1929)))))), (((/* implicit */int) (signed char)-117))));
        var_14 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) max((((/* implicit */long long int) (~(2147483647)))), (((((/* implicit */_Bool) (unsigned short)12)) ? (8742963694984518912LL) : (((/* implicit */long long int) ((/* implicit */int) (short)32755)))))))) ? (((/* implicit */long long int) ((/* implicit */int) (short)256))) : (5395986524219906194LL)));
        var_15 *= ((/* implicit */unsigned char) ((((/* implicit */_Bool) (~(((/* implicit */int) arr_3 [i_0] [i_0]))))) ? (((/* implicit */int) arr_3 [i_0] [(unsigned char)4])) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_3 [i_0] [i_0])))))));
    }
    for (long long int i_1 = 1; i_1 < 24; i_1 += 3) /* same iter space */
    {
        var_16 = ((/* implicit */short) ((-5395986524219906194LL) * (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) 1207113251412380512LL))))))));
        /* LoopNest 2 */
        for (int i_2 = 0; i_2 < 25; i_2 += 4) 
        {
            for (long long int i_3 = 1; i_3 < 21; i_3 += 1) 
            {
                {
                    var_17 = ((/* implicit */signed char) ((((/* implicit */_Bool) 5395986524219906200LL)) ? (5395986524219906206LL) : (((/* implicit */long long int) ((/* implicit */int) (short)269)))));
                    /* LoopNest 2 */
                    for (unsigned short i_4 = 1; i_4 < 22; i_4 += 1) 
                    {
                        for (unsigned short i_5 = 0; i_5 < 25; i_5 += 2) 
                        {
                            {
                                var_18 = (~(((((/* implicit */_Bool) var_11)) ? (((/* implicit */long long int) ((/* implicit */int) arr_5 [i_1 - 1]))) : (arr_6 [i_1 + 1] [i_4 + 3]))));
                                var_19 = ((/* implicit */short) max((((/* implicit */int) ((short) max((5395986524219906187LL), (((/* implicit */long long int) (signed char)-74)))))), (((int) max((((/* implicit */long long int) arr_5 [i_1 - 1])), (-5395986524219906187LL))))));
                            }
                        } 
                    } 
                }
            } 
        } 
        var_20 = ((/* implicit */short) var_8);
    }
    /* vectorizable */
    for (long long int i_6 = 1; i_6 < 24; i_6 += 3) /* same iter space */
    {
        var_21 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */int) arr_12 [i_6] [i_6] [i_6] [i_6 + 1])) | (((/* implicit */int) var_4))))) && (((/* implicit */_Bool) arr_4 [(_Bool)1]))));
        /* LoopNest 2 */
        for (long long int i_7 = 1; i_7 < 24; i_7 += 4) 
        {
            for (long long int i_8 = 0; i_8 < 25; i_8 += 2) 
            {
                {
                    var_22 = ((/* implicit */int) ((((/* implicit */int) arr_13 [i_6 + 1] [i_6 - 1] [(short)19] [i_7])) >= (((/* implicit */int) arr_13 [(signed char)4] [i_6 - 1] [i_8] [i_7]))));
                    arr_25 [i_8] [i_8] [i_7] [i_6 + 1] = ((/* implicit */short) arr_17 [i_6 - 1] [i_6 - 1] [i_6 + 1]);
                    var_23 |= ((/* implicit */_Bool) ((int) arr_23 [i_6 + 1]));
                }
            } 
        } 
        var_24 = ((((/* implicit */long long int) ((/* implicit */int) (signed char)127))) < ((~(-4824239356932650072LL))));
        var_25 = ((/* implicit */unsigned short) max((var_25), (((/* implicit */unsigned short) ((((/* implicit */int) (_Bool)1)) >= (((/* implicit */int) ((short) (signed char)13))))))));
    }
    for (long long int i_9 = 1; i_9 < 24; i_9 += 3) /* same iter space */
    {
        var_26 = ((/* implicit */long long int) ((int) (!(((/* implicit */_Bool) arr_21 [i_9 + 1] [i_9 - 1] [i_9 - 1])))));
        var_27 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((((/* implicit */int) arr_8 [i_9 - 1])) * (((/* implicit */int) arr_8 [i_9 - 1])))))));
    }
    var_28 = ((/* implicit */signed char) max((((((/* implicit */_Bool) max((var_9), (((/* implicit */short) (_Bool)0))))) ? (var_7) : (((/* implicit */long long int) ((((/* implicit */int) var_4)) | (((/* implicit */int) (signed char)13))))))), (((/* implicit */long long int) max(((~(((/* implicit */int) (_Bool)1)))), (((/* implicit */int) var_8)))))));
    var_29 = ((/* implicit */signed char) (!(((/* implicit */_Bool) ((((((/* implicit */_Bool) var_7)) ? (9223372036854775807LL) : (((/* implicit */long long int) ((/* implicit */int) var_0))))) - (((/* implicit */long long int) ((/* implicit */int) ((unsigned short) var_2)))))))));
    /* LoopSeq 1 */
    for (_Bool i_10 = 0; i_10 < 0; i_10 += 1) 
    {
        var_30 = ((/* implicit */_Bool) (~(((max((((/* implicit */long long int) (_Bool)1)), (63LL))) / (((/* implicit */long long int) min((((/* implicit */int) (_Bool)1)), (5))))))));
        /* LoopNest 2 */
        for (short i_11 = 2; i_11 < 12; i_11 += 4) 
        {
            for (_Bool i_12 = 0; i_12 < 1; i_12 += 1) 
            {
                {
                    var_31 *= ((/* implicit */long long int) (!(((/* implicit */_Bool) (-(((/* implicit */int) (short)271)))))));
                    var_32 = ((/* implicit */long long int) ((int) max((((long long int) arr_29 [i_10])), (((/* implicit */long long int) ((short) var_2))))));
                    var_33 = ((/* implicit */short) ((((/* implicit */_Bool) (-(((/* implicit */int) var_12))))) ? (((((/* implicit */long long int) var_2)) / (arr_9 [i_10] [i_11 + 1]))) : (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) (_Bool)1)) <= (((/* implicit */int) (short)368))))))));
                }
            } 
        } 
        arr_36 [i_10] [i_10] = ((/* implicit */short) ((((/* implicit */_Bool) (-(((/* implicit */int) (short)32767))))) ? (min((((/* implicit */long long int) arr_12 [i_10] [i_10] [i_10 + 1] [i_10 + 1])), (((-58LL) % (var_7))))) : (((/* implicit */long long int) (((+(((/* implicit */int) arr_28 [i_10])))) ^ (((/* implicit */int) arr_26 [i_10] [i_10])))))));
        var_34 = ((/* implicit */signed char) var_9);
    }
}
