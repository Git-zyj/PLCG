/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 210992
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=210992 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/210992
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
    for (signed char i_0 = 0; i_0 < 11; i_0 += 2) 
    {
        arr_2 [(unsigned char)5] [(unsigned char)5] = ((/* implicit */_Bool) var_12);
        arr_3 [(signed char)10] = ((/* implicit */unsigned short) (unsigned char)44);
        arr_4 [i_0] = ((/* implicit */unsigned char) ((((/* implicit */long long int) ((/* implicit */int) var_9))) & (((var_17) / (-8994010094383423148LL)))));
        arr_5 [i_0] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */int) ((var_16) != (((/* implicit */unsigned long long int) ((/* implicit */int) var_10)))))) << (((/* implicit */int) ((((/* implicit */int) var_13)) == (((/* implicit */int) var_9)))))));
    }
    for (unsigned short i_1 = 3; i_1 < 12; i_1 += 2) 
    {
        arr_8 [i_1] = ((/* implicit */int) ((((((/* implicit */int) (unsigned char)212)) ^ (((((/* implicit */int) (unsigned short)0)) & (((/* implicit */int) var_6)))))) >= (((/* implicit */int) (unsigned char)44))));
        arr_9 [i_1] = ((/* implicit */long long int) (unsigned char)44);
        /* LoopSeq 2 */
        for (unsigned char i_2 = 0; i_2 < 14; i_2 += 2) 
        {
            arr_13 [i_1] [i_1] [i_1] = ((/* implicit */unsigned char) ((((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)212))) <= (var_3))) || (((/* implicit */_Bool) (signed char)-16))));
            arr_14 [i_1 - 1] [i_2] = ((/* implicit */unsigned short) (unsigned char)28);
        }
        for (_Bool i_3 = 1; i_3 < 1; i_3 += 1) 
        {
            var_18 = ((/* implicit */unsigned long long int) var_6);
            /* LoopNest 2 */
            for (unsigned long long int i_4 = 1; i_4 < 11; i_4 += 3) 
            {
                for (int i_5 = 3; i_5 < 13; i_5 += 2) 
                {
                    {
                        arr_23 [i_3] [i_3 - 1] [i_3 - 1] [i_3 - 1] = ((/* implicit */_Bool) var_15);
                        var_19 = ((/* implicit */signed char) ((((/* implicit */_Bool) (unsigned short)24)) || (((/* implicit */_Bool) (unsigned char)150))));
                    }
                } 
            } 
            arr_24 [i_3] [i_3] = ((/* implicit */_Bool) ((((/* implicit */int) ((((/* implicit */int) var_7)) <= (((/* implicit */int) (signed char)0))))) << (((((/* implicit */int) (signed char)112)) - (93)))));
            arr_25 [i_3] [i_3] = (unsigned char)0;
            /* LoopNest 2 */
            for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
            {
                for (unsigned char i_7 = 0; i_7 < 14; i_7 += 3) 
                {
                    {
                        arr_30 [i_7] [i_3] [i_3] [i_1 + 2] = ((/* implicit */unsigned long long int) -1LL);
                        arr_31 [i_3] [i_1 + 1] [i_3 - 1] [i_3] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */int) (unsigned char)17)) % (((/* implicit */int) var_14))))) && (((/* implicit */_Bool) var_4))));
                    }
                } 
            } 
        }
    }
    var_20 = ((/* implicit */unsigned char) ((var_16) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) var_10)))));
    var_21 = var_7;
    var_22 = ((/* implicit */_Bool) 2080374784ULL);
}
