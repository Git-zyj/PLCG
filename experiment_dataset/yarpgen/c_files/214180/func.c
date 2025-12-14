/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 214180
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=214180 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/214180
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
    /* LoopNest 2 */
    for (unsigned char i_0 = 0; i_0 < 23; i_0 += 1) 
    {
        for (unsigned short i_1 = 1; i_1 < 20; i_1 += 3) 
        {
            {
                var_18 *= ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) (!(((/* implicit */_Bool) var_2))))) : (((((((/* implicit */int) arr_5 [i_0] [i_0] [i_0])) + (2147483647))) << (((((/* implicit */int) var_14)) - (60922)))))))) ? (((/* implicit */unsigned int) (+(((/* implicit */int) ((1493677790U) <= (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)0))))))))) : (((((/* implicit */_Bool) arr_2 [i_1 + 1] [i_1 + 1])) ? (arr_0 [i_1]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_3 [i_0])))))));
                var_19 = ((/* implicit */unsigned long long int) min((var_19), (((/* implicit */unsigned long long int) arr_1 [i_0]))));
                arr_7 [(signed char)5] [i_1 + 2] [i_1] = ((/* implicit */unsigned int) (+(((/* implicit */int) ((min((((/* implicit */unsigned int) arr_4 [i_0] [i_0] [i_0])), (arr_1 [i_0]))) != (((/* implicit */unsigned int) ((/* implicit */int) arr_5 [i_1 + 3] [i_1 + 1] [i_1 + 3]))))))));
            }
        } 
    } 
    var_20 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) 1888886385U)) ? (981967511U) : (((/* implicit */unsigned int) -1480905214))));
    /* LoopSeq 3 */
    /* vectorizable */
    for (signed char i_2 = 0; i_2 < 10; i_2 += 2) 
    {
        /* LoopNest 2 */
        for (signed char i_3 = 0; i_3 < 10; i_3 += 2) 
        {
            for (signed char i_4 = 0; i_4 < 10; i_4 += 4) 
            {
                {
                    arr_16 [i_3] = ((/* implicit */short) ((long long int) arr_6 [i_2]));
                    arr_17 [i_3] [i_4] = ((((((/* implicit */_Bool) arr_2 [i_2] [i_3])) || (((/* implicit */_Bool) (short)32767)))) || (((/* implicit */_Bool) (~(((/* implicit */int) arr_9 [i_2]))))));
                    /* LoopNest 2 */
                    for (unsigned char i_5 = 0; i_5 < 10; i_5 += 4) 
                    {
                        for (int i_6 = 0; i_6 < 10; i_6 += 3) 
                        {
                            {
                                var_21 ^= ((/* implicit */signed char) ((1493677790U) ^ (981967511U)));
                                var_22 = ((/* implicit */signed char) (-(((/* implicit */int) arr_20 [i_6] [i_6] [i_4] [i_5] [i_3] [3U]))));
                            }
                        } 
                    } 
                    var_23 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((int) arr_25 [i_4] [i_3] [i_2]))) ? (((((/* implicit */_Bool) arr_22 [i_4] [i_4] [i_3] [i_3] [i_2])) ? (arr_19 [i_2] [i_3] [i_4] [i_4] [i_4]) : (((/* implicit */long long int) arr_0 [i_3])))) : (((/* implicit */long long int) ((((/* implicit */_Bool) 1493677790U)) ? (1493677790U) : (1891221137U))))));
                    var_24 = ((/* implicit */int) max((var_24), (((((/* implicit */_Bool) arr_14 [i_2] [i_2] [i_3] [i_2])) ? (((/* implicit */int) arr_10 [i_4] [i_3])) : (((/* implicit */int) arr_11 [i_2] [i_2] [i_2]))))));
                }
            } 
        } 
        var_25 = ((/* implicit */unsigned int) ((((((/* implicit */int) var_1)) | (((/* implicit */int) arr_6 [i_2])))) % (((/* implicit */int) ((signed char) arr_11 [i_2] [i_2] [i_2])))));
        var_26 = ((/* implicit */unsigned short) min((var_26), (((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */int) arr_3 [i_2])) << (((var_8) + (190733925)))))) ? (arr_13 [i_2]) : (((/* implicit */long long int) arr_18 [i_2] [i_2] [i_2])))))));
        /* LoopNest 3 */
        for (unsigned long long int i_7 = 1; i_7 < 8; i_7 += 2) 
        {
            for (unsigned char i_8 = 3; i_8 < 6; i_8 += 4) 
            {
                for (unsigned int i_9 = 0; i_9 < 10; i_9 += 2) 
                {
                    {
                        var_27 = ((/* implicit */signed char) min((var_27), (((/* implicit */signed char) ((((/* implicit */_Bool) arr_25 [i_7 + 1] [i_8 + 4] [i_8])) ? (((/* implicit */unsigned int) ((((/* implicit */int) arr_28 [i_2])) + (((/* implicit */int) arr_26 [i_9]))))) : (arr_0 [i_2]))))));
                        arr_33 [i_2] [i_7] [i_7] [i_8] [i_7] [i_2] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_21 [i_2] [i_2] [i_2] [i_2] [i_2] [i_2])) ? (var_3) : (((/* implicit */unsigned int) ((/* implicit */int) arr_20 [i_2] [i_7 + 2] [i_7] [i_7] [i_8] [i_9])))))) ? (((/* implicit */unsigned int) ((((/* implicit */int) var_14)) ^ (((/* implicit */int) arr_9 [i_7]))))) : (((((/* implicit */_Bool) arr_32 [i_8 - 3])) ? (((/* implicit */unsigned int) -1550411315)) : (3312999784U)))));
                        var_28 = ((/* implicit */short) ((((/* implicit */int) arr_31 [i_9] [i_7 - 1])) + (((/* implicit */int) arr_31 [i_7] [i_7 + 1]))));
                        arr_34 [i_2] [i_7] [i_8] = ((/* implicit */unsigned int) arr_32 [i_7 - 1]);
                        /* LoopSeq 2 */
                        for (int i_10 = 1; i_10 < 8; i_10 += 2) /* same iter space */
                        {
                            var_29 = ((unsigned int) (signed char)79);
                            var_30 -= ((/* implicit */unsigned long long int) arr_21 [9U] [i_7] [i_7] [i_7 - 1] [1ULL] [i_7]);
                            arr_39 [i_2] [0U] [i_8 - 2] [i_8 - 2] [i_8 - 2] [i_10] = ((/* implicit */long long int) arr_25 [i_10 + 1] [i_10] [i_10]);
                        }
                        for (int i_11 = 1; i_11 < 8; i_11 += 2) /* same iter space */
                        {
                            arr_43 [i_2] [i_7] [i_8] [i_8] [7U] [i_9] [i_11] = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_29 [i_7 + 1] [(unsigned short)9])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_40 [i_11 + 1] [i_7 + 1] [i_8 + 3] [i_7 + 1] [i_9] [i_8 + 2] [i_2]))) : (((981967512U) >> (((((/* implicit */int) (signed char)(-127 - 1))) + (137)))))));
                            var_31 = ((/* implicit */short) arr_18 [i_7] [i_8] [i_11]);
                            var_32 = ((/* implicit */unsigned int) max((var_32), (((((/* implicit */_Bool) arr_41 [i_7 - 1] [i_7 - 1] [i_7 + 1] [i_8 + 4] [i_8 - 2])) ? (arr_41 [i_7 - 1] [i_7 + 1] [i_7 + 2] [i_8 + 2] [i_8 - 1]) : (arr_41 [i_7 + 1] [i_7 - 1] [i_7 - 1] [i_8 - 2] [i_8 - 1])))));
                        }
                    }
                } 
            } 
        } 
    }
    for (unsigned int i_12 = 3; i_12 < 18; i_12 += 2) /* same iter space */
    {
        arr_47 [i_12] [i_12] = ((/* implicit */short) arr_46 [i_12] [i_12]);
        var_33 = (+(((((/* implicit */unsigned int) ((/* implicit */int) arr_45 [i_12 - 3]))) ^ (((((/* implicit */_Bool) arr_1 [i_12])) ? (arr_44 [i_12]) : (((/* implicit */unsigned int) var_8)))))));
        var_34 = ((/* implicit */unsigned char) max((((unsigned short) ((((/* implicit */_Bool) (signed char)-80)) && ((_Bool)1)))), (((/* implicit */unsigned short) arr_46 [i_12 - 2] [i_12 - 3]))));
        var_35 = ((/* implicit */int) var_0);
    }
    for (unsigned int i_13 = 3; i_13 < 18; i_13 += 2) /* same iter space */
    {
        var_36 = ((/* implicit */signed char) (((!(((/* implicit */_Bool) arr_2 [i_13 - 1] [i_13 + 2])))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) arr_2 [i_13 - 2] [i_13 + 2])) ? (((/* implicit */int) (signed char)-80)) : (((/* implicit */int) arr_2 [i_13 + 2] [i_13 - 2])))))));
        /* LoopNest 2 */
        for (unsigned long long int i_14 = 3; i_14 < 17; i_14 += 4) 
        {
            for (unsigned short i_15 = 0; i_15 < 20; i_15 += 1) 
            {
                {
                    var_37 = ((/* implicit */unsigned char) arr_49 [i_13]);
                    var_38 *= ((/* implicit */signed char) arr_6 [12LL]);
                    var_39 = ((/* implicit */unsigned char) ((min((((var_5) - (((/* implicit */unsigned long long int) ((/* implicit */int) arr_2 [i_13 - 2] [i_14 - 2]))))), (((/* implicit */unsigned long long int) ((unsigned int) arr_3 [(_Bool)1]))))) & (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min((arr_44 [i_13]), (((/* implicit */unsigned int) var_14))))) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_2 [i_13 + 1] [i_13]))) : (max((((/* implicit */unsigned int) arr_3 [i_15])), (arr_48 [i_13]))))))));
                }
            } 
        } 
        arr_58 [i_13] [(unsigned short)9] = ((/* implicit */unsigned char) min((((/* implicit */int) var_16)), ((~(((/* implicit */int) arr_45 [i_13 + 2]))))));
        arr_59 [i_13 + 1] [i_13] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_52 [i_13] [i_13] [i_13])) ? (var_4) : (((/* implicit */unsigned long long int) max((((((/* implicit */_Bool) var_12)) ? (var_3) : (((/* implicit */unsigned int) ((/* implicit */int) arr_54 [i_13]))))), (((/* implicit */unsigned int) arr_54 [i_13 + 1])))))));
    }
    var_40 = ((/* implicit */short) var_7);
}
