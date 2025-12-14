/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 48926
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=48926 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/48926
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
    var_15 = ((((/* implicit */_Bool) -7801039789202216175LL)) ? (var_14) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_0))));
    /* LoopSeq 3 */
    for (unsigned char i_0 = 0; i_0 < 23; i_0 += 3) 
    {
        /* LoopNest 2 */
        for (long long int i_1 = 0; i_1 < 23; i_1 += 1) 
        {
            for (unsigned char i_2 = 0; i_2 < 23; i_2 += 2) 
            {
                {
                    /* LoopSeq 2 */
                    for (unsigned int i_3 = 0; i_3 < 23; i_3 += 3) 
                    {
                        arr_10 [i_0] [i_1] [i_2] [1ULL] [i_1] = ((/* implicit */unsigned int) (unsigned short)15360);
                        var_16 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) arr_2 [i_1] [i_1])), (min((((/* implicit */unsigned long long int) (unsigned char)126)), (8998890743363873913ULL)))))) ? (((/* implicit */int) ((((/* implicit */_Bool) arr_9 [i_3])) && (((/* implicit */_Bool) arr_9 [i_1]))))) : ((+(((/* implicit */int) (unsigned char)130))))));
                        arr_11 [(_Bool)1] [i_1] [i_1] [(unsigned char)4] [i_3] = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)22233)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((_Bool) arr_5 [i_0] [i_1])))) : (min((arr_7 [i_0] [18LL] [i_2]), (((/* implicit */unsigned long long int) (unsigned char)11))))))) ? ((+(((/* implicit */int) var_13)))) : (((/* implicit */int) arr_0 [i_0]))));
                        arr_12 [i_0] [(unsigned short)17] [i_1] [i_3] = ((/* implicit */short) ((((/* implicit */_Bool) (~(((((/* implicit */_Bool) arr_2 [i_0] [i_1])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_6 [i_1] [i_2]))) : (var_4)))))) ? (((unsigned long long int) arr_3 [i_1] [i_2])) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_5 [i_0] [(short)5])))));
                    }
                    /* vectorizable */
                    for (short i_4 = 0; i_4 < 23; i_4 += 3) 
                    {
                        var_17 = ((/* implicit */unsigned int) (~(((/* implicit */int) arr_3 [i_1] [i_4]))));
                        var_18 = ((/* implicit */unsigned long long int) ((((_Bool) var_1)) ? ((+(((/* implicit */int) var_13)))) : (((/* implicit */int) arr_6 [i_1] [i_2]))));
                    }
                    arr_17 [i_1] = ((/* implicit */long long int) (-(((((/* implicit */_Bool) arr_9 [i_2])) ? (arr_9 [i_0]) : (var_5)))));
                }
            } 
        } 
        var_19 = ((/* implicit */unsigned int) (-(((/* implicit */int) (unsigned char)24))));
    }
    for (unsigned long long int i_5 = 0; i_5 < 23; i_5 += 1) 
    {
        var_20 = ((/* implicit */long long int) arr_16 [i_5] [i_5] [i_5]);
        arr_21 [i_5] = ((/* implicit */long long int) (signed char)-53);
        /* LoopNest 2 */
        for (unsigned short i_6 = 0; i_6 < 23; i_6 += 3) 
        {
            for (short i_7 = 1; i_7 < 22; i_7 += 2) 
            {
                {
                    arr_30 [i_5] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((unsigned int) ((((/* implicit */int) arr_22 [19LL])) % (((/* implicit */int) arr_25 [i_5])))))) || (((/* implicit */_Bool) var_7))));
                    arr_31 [i_5] [i_6] [i_6] [i_5] = ((/* implicit */int) min((((((((/* implicit */_Bool) arr_3 [i_5] [(unsigned short)7])) && (((/* implicit */_Bool) var_13)))) ? (((/* implicit */unsigned long long int) ((var_10) ? (2153129318982157168LL) : (((/* implicit */long long int) ((/* implicit */int) var_13)))))) : (((((/* implicit */_Bool) arr_25 [i_5])) ? (arr_7 [i_5] [i_6] [i_7 - 1]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))))))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) arr_3 [i_5] [i_5])) : (((/* implicit */int) arr_6 [i_5] [i_7]))))) ? (((/* implicit */int) arr_1 [i_7 - 1])) : (((/* implicit */int) arr_24 [i_5] [(unsigned short)15] [i_7])))))));
                }
            } 
        } 
        var_21 = arr_5 [i_5] [i_5];
        /* LoopNest 2 */
        for (unsigned char i_8 = 0; i_8 < 23; i_8 += 1) 
        {
            for (int i_9 = 0; i_9 < 23; i_9 += 3) 
            {
                {
                    arr_37 [i_5] [i_5] [(_Bool)1] = ((/* implicit */int) var_14);
                    var_22 = var_1;
                    var_23 = ((/* implicit */unsigned char) (-(((unsigned long long int) ((((/* implicit */_Bool) arr_33 [i_5] [i_5] [(signed char)22])) ? (arr_7 [i_5] [i_8] [i_9]) : (((/* implicit */unsigned long long int) arr_35 [i_5] [i_5] [i_5] [(unsigned char)2])))))));
                    var_24 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned short) 208179532577126355ULL)))) ^ (arr_14 [i_5] [i_5] [i_8] [2U] [i_5]))))));
                    /* LoopNest 2 */
                    for (unsigned char i_10 = 0; i_10 < 23; i_10 += 2) 
                    {
                        for (unsigned short i_11 = 0; i_11 < 23; i_11 += 3) 
                        {
                            {
                                var_25 = ((/* implicit */signed char) ((((/* implicit */_Bool) 16715374154950563821ULL)) ? (18238564541132425261ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)22256)) ? (arr_27 [22ULL] [22ULL] [22ULL] [7]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)43319)))))) || (((/* implicit */_Bool) max((2153129318982157171LL), (((/* implicit */long long int) -1)))))))))));
                                var_26 = ((/* implicit */short) min((((/* implicit */unsigned long long int) arr_40 [18LL] [i_8] [13U])), (4611668426241343488ULL)));
                            }
                        } 
                    } 
                }
            } 
        } 
    }
    /* vectorizable */
    for (short i_12 = 0; i_12 < 13; i_12 += 3) 
    {
        arr_48 [(signed char)1] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (short)11054)) ? (((((/* implicit */_Bool) (unsigned char)126)) ? (-1) : (((/* implicit */int) (_Bool)1)))) : (((/* implicit */int) (unsigned short)17505))));
        arr_49 [1] = ((/* implicit */int) ((unsigned short) arr_13 [i_12] [i_12] [i_12] [i_12] [i_12]));
        arr_50 [(_Bool)1] = ((/* implicit */signed char) ((var_10) ? ((~(31U))) : (((((/* implicit */unsigned int) ((/* implicit */int) var_9))) + (arr_8 [i_12] [i_12] [i_12] [i_12])))));
        var_27 = ((/* implicit */short) ((int) arr_35 [i_12] [i_12] [(short)0] [i_12]));
    }
}
