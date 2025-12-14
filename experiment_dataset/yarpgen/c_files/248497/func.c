/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 248497
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=248497 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/248497
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
    var_13 = ((long long int) var_4);
    /* LoopSeq 3 */
    /* vectorizable */
    for (long long int i_0 = 0; i_0 < 12; i_0 += 2) 
    {
        var_14 -= ((((/* implicit */_Bool) (-(-1525221091)))) ? (((/* implicit */int) (unsigned short)13233)) : (((/* implicit */int) (unsigned short)52331)));
        arr_2 [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_0 [i_0] [i_0])) ? (arr_0 [i_0] [i_0]) : (arr_0 [i_0] [i_0])));
    }
    for (unsigned char i_1 = 2; i_1 < 21; i_1 += 4) 
    {
        var_15 |= ((/* implicit */int) max((((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned short)65525)) || (((/* implicit */_Bool) 2059756117))))), (arr_6 [i_1 + 1])));
        /* LoopNest 3 */
        for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
        {
            for (unsigned char i_3 = 0; i_3 < 22; i_3 += 3) 
            {
                for (signed char i_4 = 0; i_4 < 22; i_4 += 1) 
                {
                    {
                        var_16 += ((/* implicit */unsigned int) (+(((/* implicit */int) ((((/* implicit */long long int) ((((/* implicit */int) arr_8 [i_1] [i_1])) | (arr_4 [i_1 - 2])))) > (arr_7 [i_2] [i_2] [i_1]))))));
                        var_17 = ((/* implicit */unsigned short) (~(((/* implicit */int) (!(((/* implicit */_Bool) arr_5 [i_1 - 2])))))));
                        arr_15 [i_4] [i_1] [i_1] [i_1] |= ((/* implicit */int) ((unsigned short) (~(((/* implicit */int) (unsigned short)0)))));
                    }
                } 
            } 
        } 
    }
    for (long long int i_5 = 3; i_5 < 10; i_5 += 3) 
    {
        var_18 = ((/* implicit */long long int) 583052986U);
        var_19 = ((/* implicit */int) max((((/* implicit */long long int) (_Bool)0)), (min((arr_6 [i_5 - 3]), (((/* implicit */long long int) var_7))))));
        arr_19 [i_5] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) -3462890949722590031LL)) || (((((/* implicit */_Bool) 3711914310U)) && (((/* implicit */_Bool) -6930177217887465834LL))))));
    }
    /* LoopSeq 2 */
    for (unsigned long long int i_6 = 1; i_6 < 21; i_6 += 2) 
    {
        var_20 = ((/* implicit */int) var_4);
        var_21 -= ((/* implicit */unsigned long long int) ((unsigned short) arr_9 [i_6]));
    }
    for (int i_7 = 0; i_7 < 11; i_7 += 3) 
    {
        arr_26 [i_7] = ((/* implicit */long long int) arr_10 [i_7] [i_7] [i_7] [i_7]);
        arr_27 [4] |= ((/* implicit */short) (unsigned short)52303);
    }
}
