/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 50222
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=50222 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/50222
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
    var_15 = (~(((/* implicit */int) var_14)));
    /* LoopSeq 2 */
    for (int i_0 = 0; i_0 < 25; i_0 += 3) 
    {
        var_16 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_8)) ? (((((/* implicit */_Bool) (unsigned short)43277)) ? (-4983024583748832449LL) : (((/* implicit */long long int) ((/* implicit */int) arr_3 [i_0]))))) : (((/* implicit */long long int) ((((/* implicit */int) var_4)) * (((/* implicit */int) arr_0 [i_0] [i_0])))))))) ? (min((((/* implicit */unsigned long long int) (+(((/* implicit */int) var_2))))), (max((arr_2 [i_0]), (((/* implicit */unsigned long long int) arr_3 [i_0])))))) : (((/* implicit */unsigned long long int) min((arr_1 [i_0] [i_0]), (arr_1 [i_0] [i_0]))))));
        arr_4 [i_0] [i_0] = ((/* implicit */_Bool) max((arr_2 [i_0]), (((/* implicit */unsigned long long int) (~(arr_1 [i_0] [i_0]))))));
        /* LoopNest 2 */
        for (unsigned int i_1 = 0; i_1 < 25; i_1 += 3) 
        {
            for (unsigned char i_2 = 0; i_2 < 25; i_2 += 3) 
            {
                {
                    /* LoopSeq 2 */
                    for (signed char i_3 = 0; i_3 < 25; i_3 += 3) /* same iter space */
                    {
                        var_17 = ((/* implicit */_Bool) max((var_17), (((/* implicit */_Bool) min((((/* implicit */unsigned long long int) ((signed char) arr_9 [18U] [i_2] [(short)20]))), (((((/* implicit */_Bool) var_4)) ? (arr_2 [i_0]) : (arr_2 [i_2]))))))));
                        var_18 = ((/* implicit */_Bool) ((signed char) max((((/* implicit */unsigned short) arr_10 [i_0] [i_0] [i_0] [i_0])), ((unsigned short)53611))));
                        var_19 = ((/* implicit */short) ((((/* implicit */_Bool) (-(arr_2 [i_2])))) ? (((/* implicit */int) ((((/* implicit */_Bool) (unsigned short)7713)) || (((/* implicit */_Bool) (+(var_3))))))) : ((-((+(((/* implicit */int) (unsigned short)57810))))))));
                        arr_15 [i_3] [i_3] [i_1] [i_1] [i_0] [i_0] = ((/* implicit */signed char) ((((((/* implicit */_Bool) arr_14 [i_3] [i_1])) ? ((+(((/* implicit */int) var_12)))) : (((/* implicit */int) min((var_8), (((/* implicit */short) arr_0 [(short)13] [i_1]))))))) - (((/* implicit */int) arr_8 [i_3] [20U] [i_1]))));
                    }
                    for (signed char i_4 = 0; i_4 < 25; i_4 += 3) /* same iter space */
                    {
                        arr_19 [i_1] [i_1] [i_1] [i_0] = ((/* implicit */unsigned long long int) ((int) ((((/* implicit */_Bool) 18446744073709551606ULL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)23915))) : (576179277326712832ULL))));
                        arr_20 [i_0] [i_1] [i_0] [i_0] = ((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (-(((/* implicit */int) var_14))))))))) % (min((((/* implicit */long long int) 2147483629)), (arr_9 [9U] [i_2] [i_1])))));
                        var_20 = ((/* implicit */unsigned short) ((((/* implicit */int) arr_13 [(short)8] [i_2] [i_1])) % (((/* implicit */int) ((signed char) -846346308)))));
                    }
                    arr_21 [14LL] [i_0] [14LL] [i_1] = ((/* implicit */signed char) ((arr_7 [i_1] [i_1] [i_1]) < (-1283142539680949606LL)));
                }
            } 
        } 
    }
    for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
    {
        /* LoopNest 3 */
        for (unsigned int i_6 = 0; i_6 < 16; i_6 += 3) 
        {
            for (unsigned int i_7 = 1; i_7 < 13; i_7 += 3) 
            {
                for (signed char i_8 = 0; i_8 < 16; i_8 += 3) 
                {
                    {
                        arr_31 [i_8] [i_8] = ((/* implicit */signed char) (~((-(((/* implicit */int) (unsigned short)7713))))));
                        arr_32 [i_5] [i_6] [i_8] [i_5] [i_7] [i_8] = ((/* implicit */long long int) var_10);
                        arr_33 [i_8] = ((/* implicit */unsigned int) arr_6 [(unsigned short)7]);
                        var_21 = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) arr_0 [i_5] [i_7 + 2])) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_22 [(unsigned short)1])) ? (((/* implicit */unsigned int) ((/* implicit */int) var_9))) : (var_3)))) : (max((((/* implicit */unsigned long long int) arr_27 [i_6] [i_6] [i_7 - 1] [i_8])), (144115188071661568ULL))))) >> (((max((((/* implicit */int) arr_25 [(signed char)0] [i_7 + 2] [i_7 - 1])), (-402050789))) + (53)))));
                    }
                } 
            } 
        } 
        arr_34 [i_5] [i_5] = ((/* implicit */signed char) (-(min((((((/* implicit */_Bool) arr_1 [i_5] [i_5])) ? (((/* implicit */long long int) ((/* implicit */int) var_9))) : (-7370525778359733890LL))), (((/* implicit */long long int) (+(var_11))))))));
    }
}
