/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 216239
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=216239 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/216239
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
    var_13 |= ((/* implicit */short) ((var_8) ? (var_0) : ((((!(((/* implicit */_Bool) 8191U)))) ? (((/* implicit */unsigned int) ((/* implicit */int) var_2))) : (((unsigned int) (unsigned short)40938))))));
    /* LoopSeq 3 */
    for (short i_0 = 0; i_0 < 17; i_0 += 3) 
    {
        var_14 -= ((/* implicit */unsigned long long int) var_12);
        var_15 = ((/* implicit */unsigned char) 3710145321U);
        /* LoopSeq 3 */
        for (unsigned char i_1 = 0; i_1 < 17; i_1 += 4) 
        {
            arr_6 [i_0] [i_1] = ((/* implicit */unsigned int) arr_0 [i_0]);
            arr_7 [i_0] [i_0] [i_1] |= ((/* implicit */unsigned int) ((((((/* implicit */_Bool) min((((/* implicit */unsigned int) (short)8191)), (1322367911U)))) ? (var_5) : (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) var_9)) && (((/* implicit */_Bool) arr_4 [i_0] [i_0] [i_1])))))))) <= (((((((/* implicit */_Bool) 288230376151187456LL)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)13))) : (var_5))) << (((var_6) - (2677958357U)))))));
            var_16 |= ((/* implicit */_Bool) max((var_7), (((/* implicit */unsigned int) (unsigned char)29))));
            var_17 = ((/* implicit */unsigned char) ((signed char) arr_5 [i_0] [i_1]));
            /* LoopNest 2 */
            for (unsigned int i_2 = 3; i_2 < 16; i_2 += 1) 
            {
                for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                {
                    {
                        var_18 ^= ((/* implicit */_Bool) var_3);
                        arr_14 [i_0] [i_0] [i_0] [i_0] |= ((/* implicit */short) ((((/* implicit */_Bool) arr_8 [8ULL] [i_1] [8ULL])) ? (((/* implicit */long long int) var_11)) : (min((((/* implicit */long long int) (unsigned short)13)), (-4184868713660384582LL)))));
                        var_19 = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) ((unsigned char) 12475256757807955092ULL))) ? (min((2147483648U), (((/* implicit */unsigned int) arr_9 [i_0] [i_0])))) : (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) < (2972599385U))))))) << (((((/* implicit */int) max((var_1), (((/* implicit */short) ((((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) <= (var_6))))))) - (26218)))));
                    }
                } 
            } 
        }
        for (int i_4 = 0; i_4 < 17; i_4 += 1) 
        {
            var_20 = ((/* implicit */_Bool) (~(var_6)));
            var_21 = ((/* implicit */short) max((((((/* implicit */_Bool) var_12)) ? (arr_11 [i_0] [i_0] [i_0] [i_0]) : (((/* implicit */unsigned long long int) max((var_7), (((/* implicit */unsigned int) var_12))))))), (((/* implicit */unsigned long long int) arr_16 [i_0] [i_0]))));
            var_22 = ((/* implicit */unsigned long long int) max((max((((/* implicit */unsigned int) ((short) var_1))), (var_3))), (((/* implicit */unsigned int) ((signed char) arr_13 [i_0] [i_0] [i_0] [i_0] [i_0] [i_4])))));
        }
        /* vectorizable */
        for (unsigned long long int i_5 = 0; i_5 < 17; i_5 += 2) 
        {
            var_23 = ((/* implicit */unsigned int) min((var_23), (((/* implicit */unsigned int) var_12))));
            /* LoopNest 2 */
            for (unsigned int i_6 = 0; i_6 < 17; i_6 += 3) 
            {
                for (unsigned long long int i_7 = 1; i_7 < 13; i_7 += 3) 
                {
                    {
                        arr_23 [i_0] [i_7] [i_0] = ((/* implicit */unsigned char) (~(((/* implicit */int) (unsigned short)9))));
                        arr_24 [i_5] |= ((/* implicit */short) arr_22 [i_5]);
                        arr_25 [i_5] |= ((/* implicit */unsigned long long int) var_11);
                        arr_26 [i_0] [i_5] [i_6] [i_7] = ((/* implicit */unsigned char) var_4);
                        var_24 -= ((/* implicit */short) var_8);
                    }
                } 
            } 
        }
        var_25 = ((/* implicit */_Bool) min((var_25), (((/* implicit */_Bool) arr_9 [i_0] [i_0]))));
    }
    for (unsigned long long int i_8 = 2; i_8 < 14; i_8 += 3) /* same iter space */
    {
        var_26 = ((/* implicit */unsigned long long int) arr_12 [i_8] [i_8 - 1] [i_8] [i_8]);
        var_27 = ((/* implicit */_Bool) (+(min((((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned char)0)) >> (((((/* implicit */int) (signed char)124)) - (121)))))), (arr_22 [6LL])))));
        var_28 ^= ((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_13 [i_8] [i_8 - 2] [i_8] [i_8] [i_8] [6])) ? (((/* implicit */int) var_9)) : (((/* implicit */int) var_9))))) ? (((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_10 [i_8]))) < (var_5)))) : (arr_9 [i_8 + 2] [i_8 - 1]))))));
        /* LoopSeq 2 */
        for (short i_9 = 2; i_9 < 16; i_9 += 1) 
        {
            /* LoopNest 2 */
            for (unsigned long long int i_10 = 1; i_10 < 15; i_10 += 1) 
            {
                for (_Bool i_11 = 0; i_11 < 1; i_11 += 1) 
                {
                    {
                        var_29 = ((/* implicit */unsigned char) max((var_29), (((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 2972599385U)) ? (arr_30 [i_8 + 1]) : (2972599409U)))) ? (((/* implicit */int) (!(((/* implicit */_Bool) 2147483647))))) : (((((/* implicit */int) (short)1008)) | (((/* implicit */int) (short)-24451)))))))));
                        var_30 = ((/* implicit */_Bool) (-(((((/* implicit */_Bool) max((((/* implicit */unsigned short) var_10)), ((unsigned short)17)))) ? (arr_11 [(_Bool)1] [(_Bool)1] [i_10] [i_10 - 1]) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) var_10)) > (((/* implicit */int) (unsigned short)9))))))))));
                        var_31 |= ((/* implicit */_Bool) ((((/* implicit */_Bool) max((((((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) * (0ULL))), (((/* implicit */unsigned long long int) var_1))))) ? (((/* implicit */int) min((arr_10 [i_10 + 1]), (arr_10 [i_10 - 1])))) : ((-(((/* implicit */int) ((signed char) 18446462598732840960ULL)))))));
                        /* LoopSeq 1 */
                        for (short i_12 = 2; i_12 < 15; i_12 += 1) 
                        {
                            var_32 = ((/* implicit */short) ((unsigned short) 2972599365U));
                            arr_38 [i_12 - 1] [(_Bool)1] [(_Bool)1] [(unsigned short)2] |= ((/* implicit */_Bool) max((var_3), (((((/* implicit */_Bool) ((unsigned char) var_6))) ? (((((/* implicit */_Bool) arr_29 [i_8])) ? (var_0) : (((/* implicit */unsigned int) ((/* implicit */int) var_12))))) : (((/* implicit */unsigned int) ((/* implicit */int) min((arr_29 [i_8]), (((/* implicit */short) var_8))))))))));
                            var_33 = ((/* implicit */unsigned int) max((var_33), (((/* implicit */unsigned int) min((((((/* implicit */_Bool) arr_1 [i_12 + 2] [i_12 + 2])) ? (((/* implicit */int) var_8)) : (((/* implicit */int) ((var_7) < (((/* implicit */unsigned int) var_11))))))), (((/* implicit */int) arr_19 [i_8])))))));
                            var_34 = ((/* implicit */unsigned long long int) min((var_34), (((/* implicit */unsigned long long int) ((signed char) ((((/* implicit */_Bool) ((((/* implicit */int) (unsigned char)255)) - (((/* implicit */int) (unsigned char)0))))) ? (((/* implicit */int) arr_34 [6U] [6U])) : (((/* implicit */int) (short)-10438))))))));
                        }
                    }
                } 
            } 
            var_35 = min((min((((/* implicit */unsigned long long int) (unsigned char)0)), (1542197165537403339ULL))), (((/* implicit */unsigned long long int) (-(-19)))));
        }
        for (unsigned short i_13 = 4; i_13 < 13; i_13 += 3) 
        {
            var_36 |= ((/* implicit */unsigned char) min((((((/* implicit */_Bool) max((((/* implicit */signed char) var_4)), (arr_21 [i_8 + 3] [(signed char)12] [i_13] [i_8 + 3])))) ? (var_11) : (((((/* implicit */int) (unsigned char)169)) * (((/* implicit */int) var_10)))))), (((/* implicit */int) var_2))));
            var_37 -= ((/* implicit */long long int) (-(max((var_0), (((/* implicit */unsigned int) (+(var_11))))))));
            var_38 = ((((/* implicit */_Bool) 2235117860U)) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) : (((((/* implicit */_Bool) 3219792823U)) ? (((/* implicit */unsigned int) (((_Bool)1) ? (((/* implicit */int) (unsigned short)38163)) : (((/* implicit */int) arr_21 [14ULL] [(short)0] [i_8] [i_13]))))) : (3785380335U))));
            arr_41 [i_8] [i_13] = ((/* implicit */unsigned short) var_8);
        }
    }
    /* vectorizable */
    for (unsigned long long int i_14 = 2; i_14 < 14; i_14 += 3) /* same iter space */
    {
        var_39 -= ((/* implicit */signed char) (_Bool)1);
        var_40 -= ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((2153000168U) + (((/* implicit */unsigned int) ((/* implicit */int) (short)32767)))))) ? (((/* implicit */int) (_Bool)1)) : ((-(((/* implicit */int) (unsigned short)55739))))));
    }
}
