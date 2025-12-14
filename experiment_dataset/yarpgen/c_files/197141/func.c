/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 197141
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=197141 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/197141
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
    /* LoopSeq 2 */
    /* vectorizable */
    for (signed char i_0 = 0; i_0 < 10; i_0 += 3) 
    {
        arr_2 [i_0] = ((/* implicit */int) ((var_14) ? (2684287289U) : (arr_1 [i_0])));
        var_17 += ((/* implicit */unsigned int) ((((((/* implicit */int) (short)-15851)) + (2147483647))) >> (((((/* implicit */int) (signed char)-62)) + (77)))));
        var_18 += ((/* implicit */signed char) arr_0 [(unsigned char)0]);
    }
    for (unsigned char i_1 = 0; i_1 < 12; i_1 += 1) 
    {
        /* LoopNest 2 */
        for (int i_2 = 0; i_2 < 12; i_2 += 4) 
        {
            for (unsigned long long int i_3 = 3; i_3 < 11; i_3 += 4) 
            {
                {
                    arr_9 [i_1] [i_1] [i_2] [i_2] = (~((-(((/* implicit */int) (signed char)61)))));
                    var_19 -= ((/* implicit */int) max((((((/* implicit */long long int) ((/* implicit */int) max((((/* implicit */unsigned char) (signed char)61)), ((unsigned char)80))))) / (((((/* implicit */_Bool) (signed char)-62)) ? (5787934041691954940LL) : (((/* implicit */long long int) ((/* implicit */int) var_10))))))), (((/* implicit */long long int) var_6))));
                }
            } 
        } 
        arr_10 [i_1] = ((((/* implicit */_Bool) (signed char)-62)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_0))) : (((((/* implicit */_Bool) (unsigned char)236)) ? (16746286491413033518ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-15847))))));
        /* LoopSeq 1 */
        /* vectorizable */
        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
        {
            var_20 = ((/* implicit */int) (_Bool)1);
            /* LoopSeq 3 */
            for (long long int i_5 = 0; i_5 < 12; i_5 += 1) 
            {
                arr_15 [i_4] [i_4] [i_4] [i_4] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) (+(arr_3 [i_1]))))));
                arr_16 [i_4] [i_5] [i_4] = ((/* implicit */unsigned short) ((8938962023650635324LL) > (((/* implicit */long long int) ((/* implicit */int) arr_4 [i_1] [i_5])))));
                var_21 = ((/* implicit */_Bool) arr_13 [i_1] [i_4] [i_1]);
            }
            for (int i_6 = 0; i_6 < 12; i_6 += 3) 
            {
                var_22 -= ((/* implicit */signed char) arr_14 [i_1] [(signed char)4] [i_6]);
                var_23 = ((/* implicit */unsigned int) ((8389964591354915756ULL) == (((/* implicit */unsigned long long int) var_1))));
                arr_21 [i_1] [i_4] [i_1] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) 8603785692028257352LL)) ? (((/* implicit */int) (_Bool)1)) : ((-(((/* implicit */int) (short)-15847))))));
                var_24 = ((/* implicit */_Bool) max((var_24), (((/* implicit */_Bool) (-(((/* implicit */int) (!(((/* implicit */_Bool) -1088362027))))))))));
            }
            for (signed char i_7 = 0; i_7 < 12; i_7 += 1) 
            {
                var_25 -= ((/* implicit */long long int) (+(((/* implicit */int) ((-1251103628) > (((/* implicit */int) (short)-15847)))))));
                var_26 = ((/* implicit */signed char) (+(arr_13 [i_1] [i_4] [3ULL])));
            }
            arr_24 [i_1] [i_4] = ((/* implicit */_Bool) (+(arr_11 [i_1] [i_4] [i_1])));
        }
    }
    var_27 += ((/* implicit */unsigned short) var_14);
}
