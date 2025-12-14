/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 30172
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=30172 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/30172
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
    for (unsigned short i_0 = 1; i_0 < 18; i_0 += 4) 
    {
        /* LoopSeq 1 */
        for (short i_1 = 0; i_1 < 21; i_1 += 1) 
        {
            var_14 = ((/* implicit */long long int) min((var_6), (((/* implicit */unsigned int) arr_5 [i_0] [i_0] [i_0]))));
            arr_6 [i_0] [7LL] [i_0] = ((/* implicit */unsigned short) min((((((/* implicit */_Bool) arr_3 [i_0 + 2])) ? (((/* implicit */int) arr_3 [i_0 + 2])) : (((/* implicit */int) arr_5 [i_0 + 1] [i_0 + 1] [i_0])))), (((((/* implicit */_Bool) arr_3 [i_0 + 2])) ? (((/* implicit */int) arr_3 [i_0 + 2])) : (((/* implicit */int) arr_3 [i_0 + 2]))))));
            var_15 = ((/* implicit */signed char) arr_4 [i_0] [i_0] [i_0]);
        }
        var_16 = (-(min((arr_1 [i_0 + 2]), (((/* implicit */long long int) var_5)))));
        var_17 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((((/* implicit */int) (_Bool)1)) | (var_0))) * (((/* implicit */int) ((var_6) < (((/* implicit */unsigned int) ((/* implicit */int) arr_5 [i_0] [i_0] [i_0]))))))))) ? (min((arr_1 [i_0]), (((/* implicit */long long int) ((((/* implicit */_Bool) arr_2 [i_0])) || (((/* implicit */_Bool) (unsigned short)24723))))))) : (((/* implicit */long long int) ((/* implicit */int) max((((/* implicit */unsigned char) (signed char)-58)), ((unsigned char)32)))))));
    }
    /* vectorizable */
    for (unsigned long long int i_2 = 0; i_2 < 24; i_2 += 2) 
    {
        /* LoopNest 2 */
        for (unsigned int i_3 = 1; i_3 < 21; i_3 += 4) 
        {
            for (short i_4 = 1; i_4 < 23; i_4 += 2) 
            {
                {
                    arr_15 [i_2] [i_3] [i_2] [i_2] = (_Bool)1;
                    var_18 = ((/* implicit */_Bool) 5320625740473553624ULL);
                    var_19 *= ((/* implicit */signed char) ((1854318889) == (arr_11 [i_4 - 1])));
                    var_20 = ((/* implicit */short) ((((((/* implicit */_Bool) arr_10 [i_2] [(signed char)7])) && (((/* implicit */_Bool) var_13)))) ? (((/* implicit */int) arr_13 [i_2] [i_2] [i_2])) : (((/* implicit */int) ((((/* implicit */_Bool) arr_14 [15LL] [i_2])) && (((/* implicit */_Bool) 549755289600ULL)))))));
                }
            } 
        } 
        /* LoopSeq 2 */
        for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
        {
            /* LoopNest 2 */
            for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
            {
                for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
                {
                    {
                        var_21 = ((/* implicit */signed char) ((arr_10 [(signed char)13] [i_5]) > (((/* implicit */unsigned int) ((/* implicit */int) var_11)))));
                        var_22 = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_12 [i_2])) && (((/* implicit */_Bool) arr_12 [i_7]))));
                        var_23 = ((/* implicit */_Bool) max((var_23), (var_1)));
                        var_24 += ((/* implicit */unsigned int) ((arr_23 [21ULL] [(unsigned short)17] [i_5]) != (((/* implicit */long long int) ((/* implicit */int) arr_7 [i_7])))));
                    }
                } 
            } 
            /* LoopNest 2 */
            for (short i_8 = 0; i_8 < 24; i_8 += 1) 
            {
                for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
                {
                    {
                        var_25 ^= ((/* implicit */signed char) (~(((arr_13 [7] [i_2] [i_2]) ? (arr_10 [4ULL] [4ULL]) : (((/* implicit */unsigned int) var_5))))));
                        var_26 = ((/* implicit */int) ((long long int) ((((/* implicit */int) (short)20015)) % (((/* implicit */int) arr_13 [i_2] [i_2] [i_2])))));
                        var_27 = ((/* implicit */_Bool) min((var_27), (((/* implicit */_Bool) ((arr_13 [(_Bool)1] [(signed char)12] [i_5]) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)34))) : (arr_21 [8LL]))))));
                    }
                } 
            } 
        }
        for (int i_10 = 1; i_10 < 21; i_10 += 2) 
        {
            /* LoopSeq 1 */
            for (unsigned long long int i_11 = 0; i_11 < 24; i_11 += 3) 
            {
                var_28 -= ((/* implicit */unsigned short) (-(var_0)));
                /* LoopSeq 2 */
                for (unsigned short i_12 = 0; i_12 < 24; i_12 += 4) /* same iter space */
                {
                    var_29 = ((/* implicit */unsigned long long int) (-(((/* implicit */int) arr_28 [i_10 + 3] [(unsigned short)19] [9] [9] [9]))));
                    arr_37 [i_2] [(unsigned short)18] [i_10] [i_2] = (~(((/* implicit */int) arr_30 [5LL] [i_10 + 1])));
                    arr_38 [i_10] = ((/* implicit */unsigned int) ((((/* implicit */int) ((short) arr_36 [i_2] [i_2] [(_Bool)1] [9LL]))) * (((/* implicit */int) arr_8 [i_10 + 1] [i_12]))));
                    var_30 = ((/* implicit */unsigned long long int) ((((((/* implicit */int) var_13)) + (2147483647))) << (((((((((/* implicit */_Bool) (unsigned short)523)) ? (((/* implicit */int) (signed char)-27)) : (((/* implicit */int) (unsigned char)47)))) + (56))) - (29)))));
                }
                for (unsigned short i_13 = 0; i_13 < 24; i_13 += 4) /* same iter space */
                {
                    /* LoopSeq 2 */
                    for (short i_14 = 0; i_14 < 24; i_14 += 4) 
                    {
                        var_31 = ((/* implicit */unsigned long long int) ((((/* implicit */int) arr_13 [i_10 + 2] [i_10 + 2] [i_10 + 2])) << (((/* implicit */int) (_Bool)1))));
                        var_32 = ((/* implicit */signed char) var_7);
                        var_33 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) (-(((/* implicit */int) (unsigned short)62004)))))));
                        arr_45 [(_Bool)1] [i_13] [(_Bool)1] [(_Bool)1] [i_14] [i_10] = ((/* implicit */unsigned short) (((((-(((/* implicit */int) var_11)))) + (2147483647))) << (((((var_9) % (((/* implicit */unsigned long long int) ((/* implicit */int) arr_7 [i_2]))))) - (8ULL)))));
                    }
                    for (int i_15 = 0; i_15 < 24; i_15 += 1) 
                    {
                        arr_49 [i_10] = ((/* implicit */int) var_4);
                        arr_50 [i_10] [i_10] [i_11] [(short)7] [i_15] = ((/* implicit */signed char) (!(((/* implicit */_Bool) (~(((/* implicit */int) arr_7 [22ULL])))))));
                        arr_51 [(unsigned char)11] [i_10] [i_10] [(unsigned char)11] = ((/* implicit */unsigned int) arr_34 [i_10]);
                    }
                    var_34 += ((/* implicit */short) (((-(((/* implicit */int) var_11)))) > (((/* implicit */int) ((((/* implicit */int) var_7)) < (((/* implicit */int) var_11)))))));
                    var_35 -= ((/* implicit */int) ((_Bool) arr_22 [i_10 - 1] [i_10 + 2] [i_10 + 3] [i_10 + 1]));
                    var_36 ^= ((/* implicit */unsigned long long int) ((((/* implicit */int) ((-6803192792295861268LL) < (((/* implicit */long long int) var_0))))) <= (((/* implicit */int) ((signed char) var_11)))));
                }
                /* LoopSeq 2 */
                for (short i_16 = 0; i_16 < 24; i_16 += 3) 
                {
                    var_37 = ((/* implicit */unsigned short) ((((/* implicit */int) ((4106299004281818534ULL) <= (((/* implicit */unsigned long long int) var_0))))) * (((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) arr_8 [i_2] [i_2])) : (var_0)))));
                    arr_54 [i_2] [i_2] |= ((/* implicit */signed char) ((((/* implicit */unsigned int) (-(((/* implicit */int) (_Bool)1))))) <= (((((/* implicit */_Bool) arr_11 [i_10])) ? (2839448866U) : (((/* implicit */unsigned int) -2105403947))))));
                    /* LoopSeq 1 */
                    for (unsigned char i_17 = 0; i_17 < 24; i_17 += 2) 
                    {
                        var_38 = ((/* implicit */int) ((long long int) arr_48 [i_2] [14ULL] [i_11] [i_2] [i_2]));
                        var_39 |= ((/* implicit */short) ((((/* implicit */_Bool) ((arr_30 [i_2] [i_10]) ? (((/* implicit */int) (signed char)-47)) : (270818117)))) && (((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) / (arr_39 [i_17] [i_16] [(short)4] [(signed char)2] [4U] [i_17]))))));
                    }
                    var_40 = ((/* implicit */int) min((var_40), (((/* implicit */int) ((((/* implicit */unsigned int) ((((/* implicit */int) arr_22 [i_10] [12ULL] [12ULL] [(signed char)19])) << (((((/* implicit */int) arr_7 [i_2])) - (78)))))) > (1909793050U))))));
                }
                for (_Bool i_18 = 0; i_18 < 1; i_18 += 1) 
                {
                    /* LoopSeq 1 */
                    for (unsigned long long int i_19 = 0; i_19 < 24; i_19 += 4) 
                    {
                        var_41 = ((/* implicit */unsigned int) (~(((/* implicit */int) arr_35 [i_10 + 2]))));
                        var_42 = ((((/* implicit */unsigned long long int) ((var_5) % (((/* implicit */int) arr_41 [i_2] [i_18] [i_2] [i_2] [i_2]))))) >= (((var_9) - (((/* implicit */unsigned long long int) ((/* implicit */int) arr_52 [16] [i_2] [i_2] [i_2] [i_2] [i_2]))))));
                        var_43 = (~(((/* implicit */int) arr_22 [i_10 - 1] [i_10 - 1] [6ULL] [i_11])));
                    }
                    var_44 = ((/* implicit */short) max((var_44), (((/* implicit */short) (-(((/* implicit */int) arr_41 [i_10 + 1] [i_10] [i_10] [i_10 - 1] [i_10])))))));
                }
                /* LoopSeq 1 */
                for (long long int i_20 = 1; i_20 < 20; i_20 += 2) 
                {
                    arr_68 [i_11] [19ULL] [(signed char)8] [i_10] [i_20] [i_11] = ((/* implicit */signed char) ((((/* implicit */int) var_10)) & (var_5)));
                    var_45 |= ((/* implicit */unsigned char) arr_7 [i_2]);
                    arr_69 [1LL] [1LL] [(_Bool)1] [i_10] [(_Bool)1] [(unsigned short)17] = ((/* implicit */unsigned int) ((((/* implicit */int) arr_66 [i_10 - 1] [i_10 - 1] [i_10 + 2] [i_20 + 3] [(unsigned short)7] [i_10])) >= (((/* implicit */int) arr_66 [i_10 + 2] [i_10 + 2] [i_10 + 2] [i_20 + 4] [i_20] [i_10]))));
                }
            }
            arr_70 [i_10] = ((/* implicit */unsigned char) (-(((/* implicit */int) (unsigned short)57412))));
        }
        /* LoopNest 2 */
        for (unsigned int i_21 = 0; i_21 < 24; i_21 += 2) 
        {
            for (signed char i_22 = 0; i_22 < 24; i_22 += 2) 
            {
                {
                    var_46 = ((/* implicit */unsigned short) ((arr_62 [i_2] [i_2] [i_21] [i_22] [i_22]) | (((/* implicit */long long int) ((/* implicit */int) arr_17 [i_21] [i_2])))));
                    arr_78 [(short)14] [12ULL] [(short)6] [i_22] = ((/* implicit */unsigned int) arr_33 [i_21] [i_21] [i_21] [i_2]);
                    var_47 = ((/* implicit */unsigned long long int) ((((unsigned long long int) arr_48 [i_2] [(short)16] [(_Bool)1] [i_21] [i_2])) == (((/* implicit */unsigned long long int) ((/* implicit */int) ((_Bool) var_8))))));
                }
            } 
        } 
    }
    var_48 &= ((/* implicit */int) var_2);
}
