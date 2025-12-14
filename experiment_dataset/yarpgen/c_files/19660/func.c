/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 19660
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=19660 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/19660
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
    for (unsigned int i_0 = 2; i_0 < 24; i_0 += 4) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                var_10 = ((/* implicit */unsigned int) arr_3 [i_0] [i_0] [i_1]);
                var_11 = ((/* implicit */_Bool) var_4);
                arr_5 [i_1] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) (signed char)116))));
                arr_6 [i_1] = ((arr_0 [i_1]) ? (((/* implicit */int) min((arr_4 [i_0 + 1] [i_0 - 1] [i_0 - 1]), (((/* implicit */unsigned short) (short)23701))))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_4 [i_0] [i_0] [i_1])) ? (((/* implicit */int) (signed char)-90)) : (((/* implicit */int) arr_0 [i_0]))))) ? (((/* implicit */int) min((arr_3 [i_0] [i_1] [i_0]), (((/* implicit */unsigned char) arr_0 [i_1]))))) : (((/* implicit */int) ((1881777138224097786LL) >= (((/* implicit */long long int) ((/* implicit */int) (signed char)116)))))))));
            }
        } 
    } 
    var_12 = ((/* implicit */_Bool) var_0);
    /* LoopSeq 3 */
    for (int i_2 = 1; i_2 < 10; i_2 += 2) 
    {
        arr_9 [i_2] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) arr_3 [i_2] [i_2] [i_2]))) % (((((/* implicit */_Bool) var_4)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_2 [9] [i_2] [(_Bool)1]))) : (469762048U)))))) ? (((/* implicit */unsigned long long int) var_9)) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_2 [i_2 + 1] [i_2 - 1] [i_2])) ? (((/* implicit */int) arr_4 [(_Bool)1] [i_2 + 2] [i_2])) : (((/* implicit */int) arr_4 [(unsigned short)1] [i_2 - 1] [(_Bool)1]))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_8)))))) : (min((arr_8 [i_2]), (((/* implicit */unsigned long long int) var_4))))))));
        var_13 |= ((/* implicit */signed char) arr_2 [i_2] [i_2] [i_2]);
        var_14 = ((/* implicit */short) ((((/* implicit */_Bool) arr_1 [i_2] [i_2])) ? ((~(min((((/* implicit */unsigned int) -2120600213)), (469762042U))))) : (1349045895U)));
    }
    for (_Bool i_3 = 1; i_3 < 1; i_3 += 1) 
    {
        var_15 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_5)) ? (((((/* implicit */_Bool) (+(((/* implicit */int) arr_11 [i_3]))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) 400831064U)))))) : (((unsigned long long int) (_Bool)1)))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((unsigned short) (unsigned short)26645))) ? (min((arr_1 [i_3 - 1] [i_3]), (((/* implicit */int) arr_12 [i_3])))) : (((/* implicit */int) var_1)))))));
        arr_13 [i_3] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max((((/* implicit */unsigned int) ((int) (signed char)115))), (var_0)))) ? (max((3894136215U), (((/* implicit */unsigned int) (signed char)-126)))) : (((/* implicit */unsigned int) ((/* implicit */int) var_2)))));
        var_16 = ((/* implicit */unsigned int) min((((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (~(1ULL))))))), (((((/* implicit */_Bool) ((((/* implicit */int) (signed char)35)) / (((/* implicit */int) arr_3 [i_3] [i_3] [i_3]))))) ? ((-(1159344859049361098ULL))) : (((/* implicit */unsigned long long int) (-(((/* implicit */int) arr_2 [i_3] [i_3] [i_3])))))))));
        /* LoopNest 3 */
        for (int i_4 = 1; i_4 < 11; i_4 += 3) 
        {
            for (unsigned int i_5 = 1; i_5 < 12; i_5 += 1) 
            {
                for (unsigned long long int i_6 = 1; i_6 < 13; i_6 += 2) 
                {
                    {
                        /* LoopSeq 2 */
                        /* vectorizable */
                        for (unsigned int i_7 = 1; i_7 < 13; i_7 += 1) /* same iter space */
                        {
                            var_17 = ((/* implicit */unsigned char) ((short) arr_17 [i_3] [i_3]));
                            var_18 = ((/* implicit */signed char) (~(10089929169738749630ULL)));
                            var_19 = ((/* implicit */unsigned long long int) ((((/* implicit */int) var_6)) / (((((/* implicit */int) (short)2988)) | (((/* implicit */int) arr_0 [i_3]))))));
                            var_20 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((arr_16 [i_6] [i_7]) | (((/* implicit */unsigned int) ((/* implicit */int) arr_11 [i_6])))))) ? (((/* implicit */int) arr_2 [i_3] [i_4] [i_6])) : ((+(((/* implicit */int) arr_17 [(_Bool)1] [i_7]))))));
                        }
                        for (unsigned int i_8 = 1; i_8 < 13; i_8 += 1) /* same iter space */
                        {
                            arr_27 [i_5] [i_4] [i_6] [i_6] [i_4] = ((/* implicit */unsigned short) (-((+(((/* implicit */int) min(((signed char)106), (((/* implicit */signed char) arr_12 [i_3])))))))));
                            var_21 = ((/* implicit */unsigned long long int) (-(arr_1 [i_4 + 3] [i_4 + 3])));
                            var_22 = ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) 1ULL)) ? (3673348461U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)22373))))) - (((/* implicit */unsigned int) ((/* implicit */int) min((arr_17 [i_8] [i_5]), (((/* implicit */short) arr_22 [i_3] [i_3] [i_5 - 1] [i_3] [i_8]))))))));
                            var_23 = ((/* implicit */_Bool) max(((((((~(((/* implicit */int) arr_22 [i_3 - 1] [i_4] [i_4] [i_6] [i_8])))) + (2147483647))) >> (((/* implicit */int) ((((/* implicit */long long int) arr_21 [i_3] [i_8] [i_3] [i_8])) < (arr_15 [i_5 + 2] [i_3])))))), (((/* implicit */int) (!(((/* implicit */_Bool) (~(arr_24 [i_3] [i_4] [(unsigned short)7] [i_6] [3LL])))))))));
                            var_24 = ((/* implicit */unsigned int) min((max((((arr_0 [i_6 - 1]) ? (((/* implicit */int) arr_19 [i_4] [7LL] [i_6] [i_4])) : (((/* implicit */int) arr_10 [(unsigned short)1])))), (((/* implicit */int) max((((/* implicit */signed char) arr_12 [i_4 + 1])), ((signed char)-15)))))), (((/* implicit */int) ((_Bool) ((((/* implicit */int) (unsigned char)250)) >= (((/* implicit */int) (unsigned char)109))))))));
                        }
                        arr_28 [i_6] [i_4 + 3] [i_6 + 1] [i_6 - 1] [i_6 + 1] = ((/* implicit */short) max((max((max((4294967295U), (((/* implicit */unsigned int) (short)19272)))), (((3609836142U) << (((1089906610U) - (1089906585U))))))), (min((((/* implicit */unsigned int) min((((/* implicit */short) arr_25 [i_3 - 1] [(unsigned short)3])), (arr_2 [(signed char)1] [i_4] [i_3])))), (((((/* implicit */_Bool) (short)-23855)) ? (((/* implicit */unsigned int) var_8)) : (arr_26 [(_Bool)1] [i_4] [i_4] [i_4 + 2] [i_4] [i_4])))))));
                        arr_29 [i_6] = ((/* implicit */int) ((((/* implicit */_Bool) (unsigned short)57953)) ? (3205060685U) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1)))));
                        arr_30 [i_4] [i_6] = ((/* implicit */unsigned char) arr_11 [i_5]);
                        var_25 = ((/* implicit */unsigned int) (~(((/* implicit */int) ((short) min((8356814903970801995ULL), (((/* implicit */unsigned long long int) arr_16 [i_3] [(short)6]))))))));
                    }
                } 
            } 
        } 
    }
    for (short i_9 = 1; i_9 < 7; i_9 += 1) 
    {
        var_26 = ((/* implicit */unsigned long long int) var_3);
        var_27 = (!(((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) arr_25 [i_9] [i_9]))) ^ (var_9)))) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_9]))) : (((((/* implicit */_Bool) 1587067392U)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)0))) : (685131129U)))))));
    }
}
