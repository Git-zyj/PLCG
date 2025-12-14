/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 39690
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=39690 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/39690
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
    var_20 = ((/* implicit */long long int) max((var_20), (((/* implicit */long long int) ((-835055759) >= (((((((/* implicit */_Bool) -835055759)) ? (-227795522) : (134217727))) | (((((/* implicit */int) (short)-8063)) % (((/* implicit */int) var_19)))))))))));
    /* LoopSeq 3 */
    /* vectorizable */
    for (_Bool i_0 = 0; i_0 < 0; i_0 += 1) /* same iter space */
    {
        /* LoopSeq 4 */
        for (signed char i_1 = 0; i_1 < 16; i_1 += 2) 
        {
            arr_5 [15] [i_1] = arr_0 [i_0];
            var_21 = ((/* implicit */short) min((var_21), (((/* implicit */short) ((int) var_1)))));
            arr_6 [(unsigned char)12] [(short)3] [i_1] = ((/* implicit */_Bool) arr_1 [(short)15] [i_1]);
        }
        for (unsigned short i_2 = 0; i_2 < 16; i_2 += 2) 
        {
            arr_11 [(signed char)1] [i_2] |= ((/* implicit */_Bool) ((((((/* implicit */long long int) ((/* implicit */int) (_Bool)0))) % (5424136265659630409LL))) | (((/* implicit */long long int) var_16))));
            var_22 ^= ((/* implicit */unsigned short) 834828190U);
            arr_12 [(_Bool)1] [(_Bool)1] [i_2] &= ((/* implicit */short) ((((/* implicit */unsigned int) ((/* implicit */int) arr_9 [(unsigned short)3] [i_0 + 1]))) < (2580063236U)));
        }
        for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
        {
            var_23 ^= ((/* implicit */unsigned short) ((((/* implicit */int) ((((/* implicit */_Bool) arr_3 [(_Bool)1])) || (arr_4 [(unsigned short)3])))) >= (((/* implicit */int) (short)24196))));
            arr_16 [i_0] [i_3] [i_3] = ((/* implicit */int) ((((4163337287784034434LL) << (((((((/* implicit */int) var_10)) + (130))) - (53))))) & (((/* implicit */long long int) ((/* implicit */int) ((unsigned short) var_7))))));
        }
        for (short i_4 = 2; i_4 < 15; i_4 += 1) 
        {
            arr_19 [i_4] [(short)13] [(unsigned short)7] = ((/* implicit */signed char) (short)-21277);
            var_24 = ((/* implicit */unsigned int) arr_17 [1U]);
        }
        arr_20 [i_0] = ((/* implicit */unsigned int) arr_17 [i_0 + 1]);
        arr_21 [i_0] &= ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */int) (short)-24197)) ^ (((/* implicit */int) (short)11))))) ? (-2038986192) : (((/* implicit */int) (short)27282))));
        arr_22 [(_Bool)1] [i_0] = ((/* implicit */unsigned short) ((_Bool) ((((/* implicit */int) (signed char)14)) * (((/* implicit */int) (_Bool)1)))));
        /* LoopNest 2 */
        for (unsigned short i_5 = 3; i_5 < 13; i_5 += 1) 
        {
            for (unsigned short i_6 = 0; i_6 < 16; i_6 += 1) 
            {
                {
                    arr_28 [i_0] [i_6] [i_6] = ((/* implicit */unsigned char) ((int) arr_7 [i_5 - 1] [i_5 - 2]));
                    var_25 = ((/* implicit */signed char) ((arr_0 [i_6]) <= (((/* implicit */long long int) ((/* implicit */int) ((short) var_2))))));
                    /* LoopSeq 1 */
                    for (int i_7 = 0; i_7 < 16; i_7 += 2) 
                    {
                        arr_32 [i_0] [(_Bool)1] [i_6] [i_0] [8] [(_Bool)1] = ((/* implicit */int) var_3);
                        arr_33 [(_Bool)1] [7] [i_6] [(unsigned char)9] = ((/* implicit */unsigned long long int) ((((/* implicit */int) ((((/* implicit */_Bool) 501584561)) || (((/* implicit */_Bool) arr_18 [i_0] [(unsigned short)10] [11ULL]))))) % (((((/* implicit */int) (short)24204)) << (((((/* implicit */int) (short)24193)) - (24193)))))));
                        arr_34 [6LL] [(_Bool)1] [2ULL] [i_7] [i_7] [(unsigned char)10] &= ((((((/* implicit */int) arr_9 [7] [i_7])) * (((/* implicit */int) var_11)))) >= (((/* implicit */int) ((((/* implicit */int) var_1)) == (((/* implicit */int) (short)-24196))))));
                    }
                }
            } 
        } 
    }
    for (_Bool i_8 = 0; i_8 < 0; i_8 += 1) /* same iter space */
    {
        arr_39 [i_8] [11LL] &= ((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) ((((((/* implicit */int) var_1)) % (((/* implicit */int) arr_2 [(_Bool)1] [(signed char)2] [i_8])))) < (((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) arr_35 [(unsigned short)2])) : (((/* implicit */int) (_Bool)1)))))))) + (((((-4163337287784034457LL) + (((/* implicit */long long int) ((/* implicit */int) (unsigned short)0))))) % (((/* implicit */long long int) ((((/* implicit */int) (short)24196)) % (var_14))))))));
        arr_40 [i_8] = ((/* implicit */short) ((((((/* implicit */int) (_Bool)1)) | (((/* implicit */int) arr_15 [i_8 + 1] [i_8])))) < (((((/* implicit */int) arr_15 [i_8 + 1] [(unsigned short)11])) << (((((/* implicit */int) arr_15 [i_8 + 1] [(signed char)10])) - (2080)))))));
    }
    for (_Bool i_9 = 0; i_9 < 0; i_9 += 1) /* same iter space */
    {
        arr_44 [(_Bool)1] = ((/* implicit */_Bool) ((((((/* implicit */_Bool) ((unsigned short) (unsigned short)4721))) ? (((/* implicit */int) arr_8 [(unsigned char)1])) : (((((/* implicit */int) (short)-14946)) | (((/* implicit */int) (short)-3864)))))) - (((((134217726) >> (((((/* implicit */int) (short)19332)) - (19315))))) & (((/* implicit */int) arr_38 [(short)7] [(signed char)13]))))));
        arr_45 [i_9] = ((/* implicit */_Bool) ((((((/* implicit */_Bool) ((-4163337287784034436LL) % (arr_7 [i_9] [10LL])))) ? (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) var_17)) < (((/* implicit */int) (signed char)-79)))))) : (-1547259940686640295LL))) * (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) min(((short)-24185), (((/* implicit */short) (signed char)-64))))) || ((_Bool)1)))))));
        var_26 = ((/* implicit */_Bool) min((var_26), (((((((((/* implicit */int) var_17)) << (((((/* implicit */int) var_1)) - (18186))))) * (((/* implicit */int) ((((/* implicit */int) var_10)) > (((/* implicit */int) var_18))))))) < (((/* implicit */int) ((((/* implicit */_Bool) arr_17 [i_9])) && (((((/* implicit */_Bool) 8449717124772814618LL)) && (((/* implicit */_Bool) (signed char)77)))))))))));
        arr_46 [(unsigned short)4] = ((/* implicit */short) ((arr_36 [3U] [(unsigned short)12]) != (((/* implicit */int) (_Bool)0))));
    }
    /* LoopNest 2 */
    for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) 
    {
        for (long long int i_11 = 1; i_11 < 13; i_11 += 1) 
        {
            {
                arr_51 [i_11] = ((/* implicit */unsigned char) max((((((/* implicit */int) arr_35 [i_11 + 1])) - (((/* implicit */int) arr_35 [i_11 - 1])))), (((((/* implicit */_Bool) arr_35 [i_11 - 1])) ? (((/* implicit */int) (unsigned short)25994)) : (((/* implicit */int) arr_35 [i_11 + 1]))))));
                var_27 = ((/* implicit */unsigned int) max((((/* implicit */long long int) var_2)), (((((long long int) (_Bool)1)) % (((/* implicit */long long int) ((/* implicit */int) arr_8 [(short)5])))))));
                var_28 |= ((((/* implicit */long long int) ((((((/* implicit */int) var_17)) & (((/* implicit */int) (unsigned short)25994)))) & (((((/* implicit */int) (_Bool)1)) | (((/* implicit */int) (short)-24205))))))) >= ((((((_Bool)1) ? (((/* implicit */long long int) ((/* implicit */int) (short)-24703))) : (var_13))) * (((/* implicit */long long int) ((((/* implicit */int) (_Bool)1)) - (((/* implicit */int) (_Bool)1))))))));
                arr_52 [i_10] [i_11] = ((/* implicit */_Bool) var_18);
            }
        } 
    } 
}
