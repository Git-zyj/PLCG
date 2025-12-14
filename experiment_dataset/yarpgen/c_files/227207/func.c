/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 227207
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=227207 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/227207
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
    /* LoopSeq 3 */
    for (int i_0 = 0; i_0 < 15; i_0 += 1) 
    {
        /* LoopNest 3 */
        for (unsigned int i_1 = 0; i_1 < 15; i_1 += 2) 
        {
            for (signed char i_2 = 1; i_2 < 13; i_2 += 2) 
            {
                for (unsigned short i_3 = 1; i_3 < 13; i_3 += 4) 
                {
                    {
                        var_18 = ((int) ((((/* implicit */_Bool) (unsigned short)26360)) ? (((/* implicit */long long int) ((/* implicit */int) arr_3 [i_1] [i_2] [i_2 - 1]))) : (2305843009213693952LL)));
                        /* LoopSeq 3 */
                        /* vectorizable */
                        for (unsigned int i_4 = 0; i_4 < 15; i_4 += 4) 
                        {
                            var_19 = ((/* implicit */unsigned int) (unsigned short)26357);
                            var_20 = ((/* implicit */unsigned int) min((var_20), (var_12)));
                            var_21 *= ((/* implicit */unsigned int) (unsigned short)39175);
                        }
                        for (int i_5 = 4; i_5 < 13; i_5 += 1) 
                        {
                            var_22 += ((/* implicit */long long int) arr_11 [i_0] [i_0] [i_0] [i_2 + 2] [i_3 - 1] [4U] [i_5 - 4]);
                            var_23 = ((/* implicit */unsigned char) min((var_23), (((/* implicit */unsigned char) max((((((/* implicit */_Bool) arr_12 [i_3] [i_3 + 1])) ? (((/* implicit */unsigned int) -1)) : (4294967270U))), (((/* implicit */unsigned int) max((arr_12 [(unsigned char)1] [i_3 + 1]), (((/* implicit */unsigned short) arr_3 [i_3 - 1] [i_5 + 1] [i_5]))))))))));
                            var_24 = ((/* implicit */unsigned short) max((var_24), (((/* implicit */unsigned short) (-(((/* implicit */int) ((arr_7 [(signed char)7] [i_3 + 2] [i_5 - 3] [i_3] [i_5 - 2]) >= (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)64669)))))))))));
                            var_25 = ((/* implicit */int) arr_3 [i_3 - 1] [i_3 + 1] [i_3 + 1]);
                            var_26 = ((/* implicit */unsigned int) ((unsigned long long int) (+(4294967295U))));
                        }
                        for (signed char i_6 = 1; i_6 < 14; i_6 += 1) 
                        {
                            arr_17 [i_6] [i_2] [i_3 - 1] [i_3 - 1] = ((/* implicit */signed char) -6365738643987104913LL);
                            var_27 ^= ((/* implicit */unsigned char) (-(max((max((((/* implicit */unsigned int) (short)-6)), (4294967278U))), (((/* implicit */unsigned int) ((((/* implicit */_Bool) -176911890)) ? (-295524166) : (((/* implicit */int) var_15)))))))));
                            var_28 -= ((/* implicit */unsigned short) max((((/* implicit */long long int) ((((/* implicit */_Bool) arr_0 [i_2 + 1])) && (((/* implicit */_Bool) arr_12 [i_3 + 1] [8U]))))), (((long long int) ((unsigned int) (unsigned short)39157)))));
                            arr_18 [i_0] [i_3 + 1] [i_2] [i_6] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */int) max((arr_8 [i_0] [i_2 + 2] [i_3]), (((unsigned short) (short)18332))))) + (((((/* implicit */_Bool) (-(((/* implicit */int) arr_4 [i_1] [(signed char)3] [i_3 + 1] [(unsigned short)4]))))) ? (((/* implicit */int) ((((/* implicit */_Bool) (signed char)-36)) && (((/* implicit */_Bool) var_14))))) : ((-(((/* implicit */int) (unsigned short)8191))))))));
                            var_29 = ((/* implicit */unsigned char) min((var_29), (((/* implicit */unsigned char) ((((/* implicit */unsigned int) max((((/* implicit */int) (unsigned short)16382)), (((((/* implicit */_Bool) 295524166)) ? (((/* implicit */int) (unsigned short)13670)) : (((/* implicit */int) (short)1023))))))) * (((421319789U) << (((((((/* implicit */_Bool) arr_15 [i_0] [i_0] [i_1] [i_0] [i_0])) ? (arr_11 [i_0] [i_1] [i_2] [i_2] [i_3] [i_3] [i_6 - 1]) : (831115680))) - (393228655))))))))));
                        }
                        arr_19 [i_0] [i_1] [(_Bool)1] [i_3] = ((/* implicit */unsigned short) max((((/* implicit */int) ((unsigned short) (unsigned short)7))), (((((/* implicit */_Bool) 9022636676236962942ULL)) ? (((/* implicit */int) arr_12 [i_2 - 1] [i_3 + 1])) : (((/* implicit */int) var_0))))));
                    }
                } 
            } 
        } 
        var_30 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((unsigned long long int) min((((/* implicit */long long int) 2492986783U)), (arr_13 [i_0] [i_0] [i_0] [5U] [i_0]))))) ? (arr_5 [i_0] [i_0] [i_0]) : (((/* implicit */unsigned long long int) max((((((/* implicit */_Bool) (signed char)-77)) ? (-2884777634169902227LL) : (((/* implicit */long long int) ((/* implicit */int) (short)-1024))))), (((/* implicit */long long int) var_5)))))));
    }
    for (unsigned char i_7 = 0; i_7 < 20; i_7 += 2) 
    {
        var_31 = ((/* implicit */_Bool) ((long long int) ((((/* implicit */long long int) arr_22 [i_7])) - (((-8280767503329396633LL) + (((/* implicit */long long int) ((/* implicit */int) arr_20 [i_7]))))))));
        arr_23 [i_7] = ((/* implicit */signed char) ((6365738643987104910LL) << (((max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_14)) ? (3LL) : (((/* implicit */long long int) arr_22 [i_7]))))), (arr_21 [i_7]))) - (3178931278837864614ULL)))));
        /* LoopNest 2 */
        for (unsigned int i_8 = 1; i_8 < 17; i_8 += 1) 
        {
            for (long long int i_9 = 0; i_9 < 20; i_9 += 1) 
            {
                {
                    arr_28 [i_7] [i_9] [i_7] [i_7] = ((/* implicit */int) var_7);
                    var_32 = ((/* implicit */unsigned short) min((((/* implicit */long long int) (unsigned short)26357)), (min((((/* implicit */long long int) (unsigned char)150)), (6365738643987104912LL)))));
                    arr_29 [(signed char)5] [i_9] [(unsigned short)16] = ((/* implicit */long long int) ((((/* implicit */_Bool) max((max(((unsigned short)64664), (arr_26 [(signed char)10] [(signed char)10]))), (((/* implicit */unsigned short) ((_Bool) 16777215)))))) ? (min((((/* implicit */int) arr_20 [i_9])), (((((/* implicit */_Bool) arr_21 [i_7])) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) arr_20 [i_7])))))) : (((((((/* implicit */int) (short)(-32767 - 1))) | (((/* implicit */int) (unsigned short)26333)))) ^ (((/* implicit */int) (_Bool)1))))));
                }
            } 
        } 
    }
    /* vectorizable */
    for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) 
    {
        arr_33 [i_10] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_32 [i_10] [i_10])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_6))) : (arr_32 [i_10] [i_10])));
        var_33 = ((/* implicit */short) -607752297);
        arr_34 [i_10] = ((/* implicit */signed char) ((unsigned long long int) arr_30 [i_10]));
    }
    var_34 = ((unsigned int) (signed char)-99);
    var_35 = ((/* implicit */int) (!(((((/* implicit */_Bool) var_14)) && (((/* implicit */_Bool) max((-295524152), (((/* implicit */int) (unsigned short)64669)))))))));
    var_36 = ((/* implicit */unsigned long long int) var_13);
    var_37 = (+(((/* implicit */int) ((short) min((0U), (((/* implicit */unsigned int) var_1)))))));
}
