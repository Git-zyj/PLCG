/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 238575
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=238575 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/238575
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
    var_15 = ((/* implicit */unsigned short) (~(((/* implicit */int) var_3))));
    var_16 = ((/* implicit */unsigned char) max((var_16), (((/* implicit */unsigned char) ((_Bool) var_8)))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 22; i_0 += 4) 
    {
        for (unsigned long long int i_1 = 2; i_1 < 20; i_1 += 4) 
        {
            {
                arr_6 [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) -1243377582)) ? (min((((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) (signed char)-1)) : (((/* implicit */int) (unsigned char)57)))), (((/* implicit */int) ((0) < (9)))))) : (((/* implicit */int) (signed char)(-127 - 1)))));
                var_17 = ((/* implicit */unsigned int) min((var_17), (((/* implicit */unsigned int) ((unsigned long long int) min((((/* implicit */unsigned long long int) arr_2 [i_0])), (var_13)))))));
            }
        } 
    } 
    /* LoopSeq 1 */
    for (long long int i_2 = 0; i_2 < 20; i_2 += 1) 
    {
        var_18 = ((/* implicit */unsigned int) max((var_18), (((/* implicit */unsigned int) ((min((min((var_5), (var_5))), (((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) (unsigned short)63488))) & (var_12)))))) > (((/* implicit */unsigned long long int) arr_7 [i_2] [i_2])))))));
        var_19 = ((/* implicit */unsigned int) (+(((((/* implicit */_Bool) (unsigned char)3)) ? (9234129031710200143ULL) : (((/* implicit */unsigned long long int) 4026531840U))))));
        var_20 ^= ((/* implicit */signed char) min((((/* implicit */unsigned long long int) arr_8 [i_2] [i_2])), (min((max((var_10), (((/* implicit */unsigned long long int) arr_7 [i_2] [i_2])))), (((/* implicit */unsigned long long int) (unsigned char)199))))));
        /* LoopSeq 3 */
        for (long long int i_3 = 2; i_3 < 19; i_3 += 4) 
        {
            var_21 ^= ((/* implicit */short) (+(((/* implicit */int) (!(((/* implicit */_Bool) arr_1 [i_3 + 1] [i_3 - 1])))))));
            var_22 = ((/* implicit */unsigned long long int) max((((/* implicit */int) ((((/* implicit */_Bool) ((short) (unsigned char)183))) && (((/* implicit */_Bool) min(((short)30224), (arr_10 [i_2] [i_3 + 1]))))))), (((((/* implicit */int) ((unsigned short) var_2))) + (((/* implicit */int) arr_1 [i_3 + 1] [i_3 - 1]))))));
            /* LoopSeq 1 */
            for (long long int i_4 = 1; i_4 < 17; i_4 += 1) 
            {
                /* LoopSeq 1 */
                /* vectorizable */
                for (short i_5 = 2; i_5 < 18; i_5 += 2) 
                {
                    var_23 = ((/* implicit */long long int) (~(((/* implicit */int) ((((/* implicit */long long int) 268435455U)) <= (1923604953291170768LL))))));
                    /* LoopSeq 1 */
                    for (unsigned char i_6 = 1; i_6 < 17; i_6 += 1) 
                    {
                        var_24 = ((/* implicit */short) ((((/* implicit */_Bool) ((unsigned short) (short)-30224))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_3 [i_4]))) : (var_13)));
                        arr_21 [i_6] [i_5] [i_2] [i_4] [i_2] [i_3] [i_2] = ((/* implicit */short) ((((/* implicit */unsigned long long int) ((((/* implicit */int) (signed char)0)) & (((/* implicit */int) arr_10 [i_2] [i_2]))))) & (arr_12 [i_3 - 2])));
                        var_25 = ((/* implicit */short) ((((/* implicit */int) arr_14 [i_3 - 2] [i_3] [i_4] [i_2])) != (((/* implicit */int) arr_14 [i_3 - 2] [i_3] [i_4 + 2] [i_2]))));
                        var_26 = ((/* implicit */unsigned short) max((var_26), (((/* implicit */unsigned short) ((((/* implicit */_Bool) ((unsigned short) var_7))) ? (arr_2 [i_4 + 1]) : (arr_16 [i_3] [i_3 - 1] [i_4 + 2] [i_3]))))));
                    }
                    var_27 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_9)) || (((/* implicit */_Bool) arr_0 [i_3 + 1]))));
                }
                var_28 -= ((/* implicit */unsigned char) ((((((/* implicit */int) ((((/* implicit */int) (short)16757)) < (((/* implicit */int) arr_10 [i_3] [i_4 + 2]))))) | (((/* implicit */int) arr_10 [i_3] [i_4 + 3])))) <= (((/* implicit */int) var_11))));
            }
            /* LoopNest 3 */
            for (unsigned char i_7 = 3; i_7 < 19; i_7 += 3) 
            {
                for (unsigned long long int i_8 = 0; i_8 < 20; i_8 += 1) 
                {
                    for (unsigned long long int i_9 = 3; i_9 < 18; i_9 += 4) 
                    {
                        {
                            var_29 = ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (-(var_6)))) ? (((((/* implicit */_Bool) (signed char)0)) ? (((/* implicit */int) arr_15 [i_2] [i_2] [i_7 + 1])) : (((/* implicit */int) var_14)))) : (((((/* implicit */_Bool) 2242325697971350892ULL)) ? (((/* implicit */int) (signed char)127)) : (1077704450)))))) ^ (max((arr_0 [i_2]), (((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) var_7)), (arr_2 [i_2])))))));
                            var_30 = ((/* implicit */short) min((var_30), (((/* implicit */short) ((((/* implicit */_Bool) (short)-30233)) ? (((/* implicit */int) (short)-30224)) : (((/* implicit */int) (signed char)124)))))));
                        }
                    } 
                } 
            } 
        }
        for (long long int i_10 = 2; i_10 < 18; i_10 += 1) 
        {
            /* LoopNest 3 */
            for (unsigned char i_11 = 0; i_11 < 20; i_11 += 4) 
            {
                for (unsigned int i_12 = 0; i_12 < 20; i_12 += 4) 
                {
                    for (unsigned char i_13 = 2; i_13 < 17; i_13 += 1) 
                    {
                        {
                            var_31 -= ((/* implicit */int) ((unsigned char) max((arr_2 [i_10]), (((/* implicit */unsigned int) ((((/* implicit */int) arr_1 [i_13] [i_12])) & (((/* implicit */int) var_8))))))));
                            var_32 = ((/* implicit */int) 4294967292U);
                            arr_39 [i_2] [i_2] = ((((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_10 - 2] [i_10 + 2]))) | (min((((/* implicit */unsigned int) arr_13 [i_10 - 1] [i_10 - 1] [i_10 + 1])), (arr_16 [i_2] [i_13 + 3] [i_10 + 1] [i_2]))));
                        }
                    } 
                } 
            } 
            var_33 ^= ((/* implicit */unsigned short) (-(arr_37 [i_2] [i_2] [i_2] [i_2] [i_2] [i_2] [i_2])));
            var_34 = ((/* implicit */short) (~(((/* implicit */int) ((short) min((4294967292U), (((/* implicit */unsigned int) var_8))))))));
        }
        /* vectorizable */
        for (unsigned int i_14 = 0; i_14 < 20; i_14 += 1) 
        {
            var_35 = ((/* implicit */short) min((var_35), (((/* implicit */short) ((((/* implicit */int) (signed char)97)) / (((/* implicit */int) arr_14 [i_2] [i_14] [i_14] [(signed char)4])))))));
            var_36 = ((/* implicit */unsigned int) ((long long int) arr_0 [i_2]));
        }
    }
    var_37 = ((/* implicit */unsigned short) (-(((/* implicit */int) ((unsigned char) (-(var_13)))))));
}
