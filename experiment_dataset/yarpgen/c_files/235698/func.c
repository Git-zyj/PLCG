/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 235698
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=235698 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/235698
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
    var_15 = ((/* implicit */unsigned char) (~(min((((/* implicit */long long int) ((signed char) var_11))), (var_12)))));
    /* LoopSeq 1 */
    for (signed char i_0 = 0; i_0 < 25; i_0 += 4) 
    {
        arr_4 [i_0] [24ULL] &= ((/* implicit */unsigned short) ((((/* implicit */int) ((_Bool) 137438953472ULL))) / (arr_1 [i_0] [i_0])));
        arr_5 [i_0] [i_0] |= ((/* implicit */unsigned short) arr_2 [i_0] [i_0]);
    }
    /* LoopSeq 3 */
    for (unsigned short i_1 = 0; i_1 < 22; i_1 += 3) 
    {
        arr_10 [i_1] [i_1] = (((!(((/* implicit */_Bool) arr_6 [i_1])))) && ((!(((/* implicit */_Bool) 35167192219648ULL)))));
        var_16 = ((/* implicit */signed char) ((_Bool) ((var_12) != (((/* implicit */long long int) ((/* implicit */int) var_8))))));
        var_17 -= ((/* implicit */unsigned int) ((unsigned long long int) var_12));
    }
    for (unsigned char i_2 = 0; i_2 < 13; i_2 += 1) 
    {
        var_18 &= ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) 792720057)) + (((var_13) ? (35167192219648ULL) : (4603636501620696907ULL)))))) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)12064))) : (1072693248LL)));
        arr_13 [i_2] = ((/* implicit */unsigned long long int) ((((/* implicit */unsigned long long int) 1287079883U)) == (var_9)));
        arr_14 [i_2] = ((/* implicit */unsigned int) (~(((/* implicit */int) (_Bool)1))));
    }
    for (_Bool i_3 = 1; i_3 < 1; i_3 += 1) 
    {
        /* LoopNest 3 */
        for (long long int i_4 = 0; i_4 < 24; i_4 += 2) 
        {
            for (unsigned char i_5 = 0; i_5 < 24; i_5 += 3) 
            {
                for (long long int i_6 = 0; i_6 < 24; i_6 += 4) 
                {
                    {
                        arr_25 [i_3] [2ULL] [(unsigned char)17] [(unsigned char)17] [i_3] [i_6] = ((/* implicit */long long int) ((((/* implicit */_Bool) 3038558828582155245LL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-1))) : (8976046778355898192ULL)));
                        arr_26 [(signed char)0] [i_4] [i_4] [i_4] [i_4] [i_4] = ((/* implicit */short) ((((/* implicit */_Bool) (signed char)-63)) ? (1152921504606845952ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1)))));
                    }
                } 
            } 
        } 
        arr_27 [i_3] = ((/* implicit */signed char) ((-4857991352642505232LL) + (3038558828582155245LL)));
    }
}
