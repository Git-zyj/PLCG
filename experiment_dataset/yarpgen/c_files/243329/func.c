/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 243329
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=243329 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/243329
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
    for (unsigned short i_0 = 0; i_0 < 17; i_0 += 1) 
    {
        arr_3 [i_0] = ((((/* implicit */int) (short)-12238)) * (((/* implicit */int) ((_Bool) ((arr_2 [i_0] [i_0]) < (((/* implicit */long long int) ((/* implicit */int) arr_0 [i_0] [i_0]))))))));
        var_10 = ((/* implicit */unsigned int) (((+(((/* implicit */int) (unsigned short)62432)))) < (((/* implicit */int) ((arr_2 [14ULL] [i_0]) < (((/* implicit */long long int) ((/* implicit */int) var_4))))))));
        arr_4 [i_0] = ((/* implicit */unsigned short) 5504573926030416413ULL);
        var_11 = (-(((((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned char) var_6)))) % ((~(arr_1 [13ULL] [i_0]))))));
        var_12 &= ((/* implicit */unsigned int) (-(arr_2 [i_0] [i_0])));
    }
    for (unsigned long long int i_1 = 1; i_1 < 16; i_1 += 3) 
    {
        /* LoopNest 3 */
        for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
        {
            for (_Bool i_3 = 1; i_3 < 1; i_3 += 1) 
            {
                for (short i_4 = 0; i_4 < 17; i_4 += 3) 
                {
                    {
                        var_13 = ((/* implicit */short) (!((!(((/* implicit */_Bool) min((arr_2 [i_1] [i_2]), (arr_9 [i_1] [(unsigned short)16]))))))));
                        var_14 = ((/* implicit */unsigned long long int) max((((/* implicit */long long int) ((((/* implicit */_Bool) ((long long int) -557722951622091479LL))) && (((/* implicit */_Bool) ((unsigned long long int) var_5)))))), (-1LL)));
                        /* LoopSeq 3 */
                        for (unsigned char i_5 = 1; i_5 < 15; i_5 += 3) /* same iter space */
                        {
                            var_15 = ((/* implicit */unsigned long long int) (-((-(((/* implicit */int) arr_13 [i_1] [i_1] [i_1 + 1] [i_1 + 1] [i_1]))))));
                            arr_17 [i_1] [i_4] [i_3 - 1] [i_2] [i_1] [i_1] = ((/* implicit */_Bool) min((min((((var_5) + (var_5))), (((/* implicit */unsigned int) (-(((/* implicit */int) (short)-23246))))))), (((/* implicit */unsigned int) ((unsigned short) ((unsigned long long int) var_1))))));
                            arr_18 [i_2] [i_2] [i_1] [(short)16] = ((/* implicit */short) (~(((/* implicit */int) (!((!(((/* implicit */_Bool) (unsigned short)47591)))))))));
                            arr_19 [i_1] [i_1] [i_1] [i_1 + 1] [(unsigned short)13] = ((/* implicit */unsigned short) (+(max((max((1426022253U), (((/* implicit */unsigned int) (_Bool)1)))), (((/* implicit */unsigned int) ((unsigned char) var_6)))))));
                        }
                        for (unsigned char i_6 = 1; i_6 < 15; i_6 += 3) /* same iter space */
                        {
                            arr_23 [i_1] [i_2] [i_1] [i_4] [i_6] = ((/* implicit */unsigned short) var_9);
                            var_16 = ((((/* implicit */_Bool) (+(arr_9 [i_1] [i_6 + 1])))) ? (((/* implicit */unsigned long long int) ((unsigned int) ((((/* implicit */_Bool) arr_21 [i_1] [1ULL] [i_1 + 1] [(unsigned short)0] [i_1])) || (((/* implicit */_Bool) var_4)))))) : (((9430882911156881869ULL) << (((((/* implicit */int) (unsigned short)44396)) - (44351))))));
                        }
                        for (unsigned short i_7 = 0; i_7 < 17; i_7 += 1) 
                        {
                            var_17 = ((/* implicit */_Bool) arr_9 [i_1] [i_1]);
                            var_18 = ((/* implicit */unsigned char) min((var_18), (((/* implicit */unsigned char) max((((/* implicit */long long int) arr_21 [i_1] [i_1 + 1] [i_1 - 1] [8LL] [i_1])), (arr_22 [i_7] [i_7] [i_7] [(unsigned short)16] [i_7]))))));
                        }
                    }
                } 
            } 
        } 
        var_19 &= -9223372036854775804LL;
    }
    for (short i_8 = 1; i_8 < 10; i_8 += 1) 
    {
        arr_28 [i_8 - 1] = ((/* implicit */unsigned short) var_9);
        arr_29 [i_8] = ((/* implicit */short) max((((/* implicit */unsigned long long int) -7508781173711835378LL)), (((((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)34678))) / (6151877550969773286ULL))) | (((/* implicit */unsigned long long int) arr_20 [i_8] [i_8] [i_8] [i_8]))))));
    }
    var_20 = ((/* implicit */short) min((((/* implicit */unsigned short) ((((/* implicit */_Bool) var_9)) || (((/* implicit */_Bool) var_8))))), (max((((/* implicit */unsigned short) ((((/* implicit */_Bool) var_2)) || (((/* implicit */_Bool) (unsigned char)104))))), (min(((unsigned short)44004), (var_2)))))));
}
