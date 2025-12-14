/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 209531
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=209531 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/209531
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
    var_16 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (signed char)3)) ? (var_4) : (((/* implicit */long long int) ((/* implicit */int) ((signed char) ((((/* implicit */_Bool) var_14)) ? (((/* implicit */int) var_5)) : (((/* implicit */int) (signed char)-3)))))))));
    var_17 += ((/* implicit */long long int) var_5);
    /* LoopNest 2 */
    for (unsigned char i_0 = 2; i_0 < 13; i_0 += 1) 
    {
        for (long long int i_1 = 1; i_1 < 15; i_1 += 4) 
        {
            {
                var_18 ^= ((/* implicit */signed char) (_Bool)0);
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 16; i_2 += 1) 
                {
                    for (long long int i_3 = 0; i_3 < 16; i_3 += 3) 
                    {
                        for (signed char i_4 = 3; i_4 < 15; i_4 += 3) 
                        {
                            {
                                arr_11 [i_0 + 1] [i_1] [i_2] [i_2] [i_3] [i_4 - 3] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) max((((/* implicit */unsigned short) (_Bool)1)), (arr_0 [i_0 - 2] [i_1 - 1])))) ? ((~(((/* implicit */int) arr_0 [i_2] [i_4 - 3])))) : (((/* implicit */int) min((arr_0 [i_0 + 2] [i_1 + 1]), (arr_0 [i_0 - 2] [i_4]))))));
                                arr_12 [i_0] [i_2] [i_2] [i_2] [i_2] [i_2] = ((/* implicit */_Bool) ((unsigned char) ((((/* implicit */_Bool) arr_8 [i_0] [i_1 - 1] [i_3] [i_4])) ? (((/* implicit */int) (!(((/* implicit */_Bool) var_9))))) : (((((/* implicit */_Bool) (-2147483647 - 1))) ? (((/* implicit */int) arr_4 [i_0] [i_2] [i_3])) : (((/* implicit */int) (unsigned char)255)))))));
                                arr_13 [i_0] = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) arr_7 [i_0 + 2] [i_0 + 2] [i_0] [i_2] [i_3] [i_0 + 2])) ? (((/* implicit */unsigned long long int) max((arr_9 [(signed char)7]), (arr_3 [i_4])))) : (arr_6 [i_0 + 3]))) / (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_3 [i_4 + 1])) ? (((/* implicit */int) (signed char)-4)) : (arr_3 [i_4 - 3]))))));
                            }
                        } 
                    } 
                } 
                arr_14 [0LL] |= ((/* implicit */long long int) ((((/* implicit */_Bool) ((unsigned short) (signed char)12))) ? (min((((/* implicit */unsigned long long int) var_13)), (max((((/* implicit */unsigned long long int) arr_4 [i_0] [i_1] [i_1 + 1])), (var_8))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) max(((unsigned short)62944), (((/* implicit */unsigned short) (_Bool)1))))))));
                /* LoopSeq 1 */
                /* vectorizable */
                for (unsigned long long int i_5 = 4; i_5 < 15; i_5 += 2) 
                {
                    var_19 = ((/* implicit */unsigned long long int) var_4);
                    var_20 = ((/* implicit */short) (+(117179343)));
                    var_21 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (-(((/* implicit */int) (_Bool)1))))) ? (((/* implicit */int) arr_4 [i_0 - 1] [i_0 + 3] [(_Bool)1])) : ((-(((/* implicit */int) arr_1 [i_5 + 1]))))));
                }
            }
        } 
    } 
    /* LoopSeq 2 */
    for (unsigned int i_6 = 0; i_6 < 12; i_6 += 2) 
    {
        /* LoopNest 2 */
        for (int i_7 = 2; i_7 < 10; i_7 += 2) 
        {
            for (unsigned char i_8 = 0; i_8 < 12; i_8 += 2) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned int i_9 = 1; i_9 < 9; i_9 += 3) 
                    {
                        for (int i_10 = 0; i_10 < 12; i_10 += 2) 
                        {
                            {
                                var_22 &= ((/* implicit */unsigned char) ((long long int) (~(8830064753960359296LL))));
                                var_23 = ((/* implicit */signed char) ((unsigned char) ((((/* implicit */_Bool) ((arr_31 [i_8]) ^ (((/* implicit */unsigned int) -1456646554))))) || (((/* implicit */_Bool) ((var_12) ? (arr_9 [i_7]) : (((/* implicit */int) var_13))))))));
                                arr_34 [i_10] [i_9 - 1] [i_7 + 2] [i_7 + 2] [i_6] [i_6] = ((/* implicit */_Bool) 768081919);
                            }
                        } 
                    } 
                    var_24 = ((/* implicit */_Bool) var_6);
                    arr_35 [i_6] [i_7] [i_8] = ((/* implicit */signed char) (~(-1456646554)));
                    var_25 ^= (signed char)1;
                }
            } 
        } 
        var_26 = max((((((/* implicit */_Bool) var_6)) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)3))) : ((~(var_7))))), (((/* implicit */long long int) max((((((-117179343) + (2147483647))) << (((arr_23 [(_Bool)1] [(_Bool)1] [i_6]) - (1334615323))))), (((/* implicit */int) arr_4 [i_6] [i_6] [i_6]))))));
    }
    for (long long int i_11 = 2; i_11 < 13; i_11 += 2) 
    {
        var_27 = ((/* implicit */signed char) ((((((/* implicit */int) ((((/* implicit */int) (signed char)0)) > (-413964630)))) >= ((~(((/* implicit */int) (_Bool)0)))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) max((var_12), (((((/* implicit */_Bool) (-2147483647 - 1))) || (((/* implicit */_Bool) arr_1 [i_11 - 2])))))))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) 14239072546425379068ULL)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)0))) : (3758096384U)))) ? (((arr_6 [i_11]) * (((/* implicit */unsigned long long int) ((/* implicit */int) arr_7 [i_11] [i_11] [i_11] [i_11] [i_11 - 1] [i_11]))))) : (((((/* implicit */_Bool) arr_3 [i_11])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)64))) : (var_10)))))));
        var_28 = ((/* implicit */unsigned char) (((+((((_Bool)1) ? (var_11) : (arr_5 [i_11] [i_11]))))) + (((/* implicit */int) var_13))));
        var_29 = ((/* implicit */unsigned long long int) arr_15 [(signed char)1] [i_11 - 2] [i_11]);
    }
}
