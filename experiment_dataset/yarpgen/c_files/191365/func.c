/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 191365
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=191365 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/191365
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
    var_12 = ((/* implicit */int) ((((/* implicit */_Bool) min((-1237168211), (((/* implicit */int) (signed char)3))))) ? (((((/* implicit */_Bool) -1237168211)) ? (313986556U) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned short)16256)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (unsigned short)60861))))))) : (((/* implicit */unsigned int) max((((-1250224533) / (((/* implicit */int) (_Bool)1)))), (((/* implicit */int) (unsigned short)47910)))))));
    var_13 = ((/* implicit */signed char) ((min((((/* implicit */int) var_3)), (((((/* implicit */int) var_11)) + (var_0))))) + (((/* implicit */int) var_8))));
    /* LoopSeq 2 */
    for (long long int i_0 = 2; i_0 < 22; i_0 += 1) 
    {
        var_14 = ((/* implicit */signed char) ((((/* implicit */int) ((((/* implicit */long long int) -16)) <= (((long long int) arr_0 [(unsigned short)5]))))) == (var_5)));
        var_15 = ((/* implicit */short) ((((/* implicit */_Bool) (unsigned short)57716)) ? (45974649890456568ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)5)))));
        /* LoopSeq 2 */
        /* vectorizable */
        for (signed char i_1 = 0; i_1 < 23; i_1 += 4) /* same iter space */
        {
            /* LoopNest 2 */
            for (unsigned short i_2 = 2; i_2 < 22; i_2 += 4) 
            {
                for (short i_3 = 1; i_3 < 20; i_3 += 1) 
                {
                    {
                        arr_13 [i_0] [i_3] [i_3] [(_Bool)1] [i_2] [21] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) var_3)) : (((((/* implicit */int) (short)10995)) >> (((((/* implicit */int) var_11)) + (76)))))));
                        var_16 = ((/* implicit */long long int) ((((/* implicit */int) (unsigned short)22551)) <= (-1672672386)));
                        var_17 = ((/* implicit */long long int) (~(((/* implicit */int) arr_2 [i_2 - 1]))));
                    }
                } 
            } 
            var_18 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_2)) ? (((((/* implicit */unsigned int) 2124197052)) + (3651834231U))) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) (short)30665)) : (((/* implicit */int) (unsigned short)23142)))))));
            arr_14 [i_1] [i_1] = (-(((/* implicit */int) (unsigned short)33786)));
            arr_15 [i_0] = ((/* implicit */signed char) ((((/* implicit */long long int) (+(var_6)))) + (((long long int) 1795231813))));
            var_19 = ((/* implicit */unsigned short) arr_3 [i_0 + 1]);
        }
        for (signed char i_4 = 0; i_4 < 23; i_4 += 4) /* same iter space */
        {
            var_20 = ((/* implicit */unsigned int) var_7);
            var_21 = ((/* implicit */unsigned int) min((var_21), (((/* implicit */unsigned int) max((min((((((/* implicit */long long int) arr_0 [i_4])) / (9223372036854775807LL))), (((/* implicit */long long int) arr_17 [i_0 + 1])))), (((((/* implicit */long long int) (+(((/* implicit */int) var_4))))) - (((((/* implicit */_Bool) (unsigned short)370)) ? (arr_16 [i_0]) : (((/* implicit */long long int) ((/* implicit */int) var_10))))))))))));
            arr_18 [i_0] = ((/* implicit */unsigned short) (-(((/* implicit */int) var_7))));
            arr_19 [i_4] = ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)377)))))) <= (max((((/* implicit */unsigned int) var_7)), (282130108U)))));
            var_22 = ((/* implicit */unsigned char) min((((/* implicit */unsigned int) (-(((/* implicit */int) var_3))))), (1871693184U)));
        }
    }
    /* vectorizable */
    for (unsigned int i_5 = 0; i_5 < 14; i_5 += 3) 
    {
        var_23 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_11)) ? (2932479420U) : (((/* implicit */unsigned int) ((/* implicit */int) var_3)))))) ? (((((/* implicit */_Bool) 4107742857U)) ? (((/* implicit */int) var_8)) : (arr_1 [i_5]))) : (arr_0 [i_5])));
        /* LoopSeq 3 */
        for (long long int i_6 = 0; i_6 < 14; i_6 += 4) 
        {
            arr_24 [12] [i_5] = ((/* implicit */_Bool) (+(((/* implicit */int) (signed char)-111))));
            var_24 = ((/* implicit */signed char) ((((/* implicit */_Bool) var_6)) || (((/* implicit */_Bool) var_2))));
        }
        for (int i_7 = 3; i_7 < 13; i_7 += 4) 
        {
            arr_27 [(short)11] [i_7] [i_7] |= ((/* implicit */short) var_0);
            var_25 = ((/* implicit */signed char) (~(((((/* implicit */int) (signed char)-98)) | (((/* implicit */int) var_2))))));
        }
        for (unsigned short i_8 = 0; i_8 < 14; i_8 += 3) 
        {
            var_26 &= ((/* implicit */unsigned short) (_Bool)1);
            /* LoopNest 2 */
            for (short i_9 = 1; i_9 < 13; i_9 += 4) 
            {
                for (signed char i_10 = 0; i_10 < 14; i_10 += 4) 
                {
                    {
                        /* LoopSeq 1 */
                        for (unsigned long long int i_11 = 1; i_11 < 13; i_11 += 1) 
                        {
                            arr_38 [i_8] [i_8] [i_10] [i_11] = ((/* implicit */short) ((arr_31 [i_8]) - (arr_31 [i_10])));
                            var_27 = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_34 [i_9] [i_9] [i_9] [i_11 + 1] [i_9 + 1] [i_8])) ? (((/* implicit */int) var_8)) : (((/* implicit */int) arr_29 [i_9 - 1]))));
                            var_28 = ((/* implicit */long long int) (~(((/* implicit */int) var_2))));
                        }
                        var_29 = ((/* implicit */signed char) ((((/* implicit */_Bool) -1)) ? (-417568608) : (((/* implicit */int) (signed char)-67))));
                        var_30 = ((/* implicit */_Bool) max((var_30), (((/* implicit */_Bool) (short)-4559))));
                        /* LoopSeq 2 */
                        for (signed char i_12 = 2; i_12 < 12; i_12 += 4) 
                        {
                            arr_41 [i_5] [i_5] [i_8] [i_9] [i_10] [i_8] [i_8] = ((/* implicit */_Bool) (~(-994890930)));
                            var_31 -= ((/* implicit */unsigned short) ((((/* implicit */int) (_Bool)1)) * (((((/* implicit */_Bool) (unsigned short)64887)) ? (((/* implicit */int) var_11)) : (((/* implicit */int) var_2))))));
                            arr_42 [i_5] [i_9] [(signed char)8] [i_8] [i_12] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((var_10) ? (((/* implicit */int) arr_2 [i_5])) : (var_5)))) ? (var_5) : (((/* implicit */int) (signed char)-116))));
                            var_32 = ((/* implicit */unsigned char) ((((/* implicit */int) var_7)) ^ (((/* implicit */int) (_Bool)1))));
                            var_33 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_5 [i_12 + 2] [i_9 - 1] [i_9 - 1])) && (((/* implicit */_Bool) var_9))));
                        }
                        for (unsigned long long int i_13 = 0; i_13 < 14; i_13 += 4) 
                        {
                            arr_45 [i_5] [i_8] [i_8] [(unsigned short)5] [i_5] = ((arr_43 [i_5] [i_8] [i_9 + 1] [i_8]) / (1890975581U));
                            arr_46 [i_5] [i_8] [i_9 - 1] [i_10] [i_10] = ((/* implicit */long long int) var_5);
                        }
                    }
                } 
            } 
        }
        arr_47 [i_5] = ((/* implicit */int) ((((/* implicit */unsigned int) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) arr_12 [i_5] [i_5] [i_5] [i_5])) : (((/* implicit */int) arr_36 [(_Bool)1]))))) + (((1649107645U) + (((/* implicit */unsigned int) 2147483647))))));
    }
}
