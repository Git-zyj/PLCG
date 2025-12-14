/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 249454
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=249454 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/249454
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
    for (unsigned int i_0 = 2; i_0 < 21; i_0 += 1) 
    {
        var_11 = ((/* implicit */long long int) max((var_11), (((/* implicit */long long int) (!(((/* implicit */_Bool) var_7)))))));
        var_12 += ((/* implicit */_Bool) var_10);
        var_13 = ((/* implicit */_Bool) max((((/* implicit */long long int) (-(((/* implicit */int) var_10))))), (((((((/* implicit */long long int) ((/* implicit */int) arr_2 [i_0]))) / (var_1))) * (((/* implicit */long long int) ((/* implicit */int) var_5)))))));
        var_14 = ((/* implicit */_Bool) var_6);
    }
    /* vectorizable */
    for (signed char i_1 = 0; i_1 < 12; i_1 += 4) 
    {
        /* LoopNest 2 */
        for (unsigned long long int i_2 = 1; i_2 < 11; i_2 += 3) 
        {
            for (unsigned int i_3 = 1; i_3 < 9; i_3 += 4) 
            {
                {
                    arr_10 [i_2] = ((/* implicit */short) ((((/* implicit */int) var_2)) == (((((/* implicit */int) (unsigned short)5467)) >> (((((/* implicit */int) arr_7 [i_1] [i_2] [i_3])) - (217)))))));
                    var_15 = ((((/* implicit */_Bool) arr_0 [(unsigned short)2] [i_2])) ? (((/* implicit */long long int) ((/* implicit */int) var_0))) : (((long long int) 4294967274U)));
                    var_16 = ((/* implicit */unsigned int) max((var_16), ((+(var_3)))));
                    arr_11 [i_2] = ((/* implicit */unsigned char) ((((/* implicit */int) (unsigned short)0)) << (((var_6) + (6960749121453157237LL)))));
                }
            } 
        } 
        arr_12 [i_1] [(signed char)10] = ((/* implicit */signed char) ((((/* implicit */int) (!((_Bool)1)))) & (((/* implicit */int) (signed char)(-127 - 1)))));
        /* LoopNest 3 */
        for (unsigned int i_4 = 2; i_4 < 11; i_4 += 1) 
        {
            for (unsigned int i_5 = 0; i_5 < 12; i_5 += 3) 
            {
                for (unsigned char i_6 = 1; i_6 < 10; i_6 += 1) 
                {
                    {
                        var_17 = ((/* implicit */_Bool) ((((/* implicit */int) arr_0 [i_1] [i_1])) % (((/* implicit */int) ((var_6) < (((/* implicit */long long int) 31U)))))));
                        arr_22 [i_4] = (+(((/* implicit */int) var_0)));
                    }
                } 
            } 
        } 
    }
    var_18 = ((/* implicit */unsigned long long int) ((((max((((/* implicit */unsigned int) (signed char)-107)), (var_7))) + (((/* implicit */unsigned int) ((/* implicit */int) var_5))))) >> (((var_6) + (6960749121453157215LL)))));
    var_19 += ((/* implicit */signed char) var_6);
    var_20 = ((/* implicit */_Bool) var_6);
}
