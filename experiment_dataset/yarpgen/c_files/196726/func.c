/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 196726
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=196726 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/196726
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
    var_15 = ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) ((((((/* implicit */int) (_Bool)1)) + (var_12))) + (((((/* implicit */int) (unsigned char)17)) - (((/* implicit */int) var_0))))))) == (((((/* implicit */unsigned long long int) ((var_14) ^ (((/* implicit */int) (unsigned char)227))))) ^ (((((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) | (18446744073709551588ULL)))))));
    /* LoopNest 3 */
    for (signed char i_0 = 2; i_0 < 10; i_0 += 4) 
    {
        for (unsigned char i_1 = 0; i_1 < 12; i_1 += 4) 
        {
            for (unsigned int i_2 = 0; i_2 < 12; i_2 += 4) 
            {
                {
                    var_16 = ((/* implicit */unsigned long long int) max((var_16), (((/* implicit */unsigned long long int) ((((((/* implicit */int) ((((/* implicit */int) arr_8 [i_1] [i_1])) <= (((/* implicit */int) (unsigned char)213))))) ^ (((/* implicit */int) ((var_12) >= (((/* implicit */int) var_10))))))) < (((/* implicit */int) ((((/* implicit */int) ((((/* implicit */int) var_0)) <= (((/* implicit */int) var_3))))) >= (((/* implicit */int) ((((/* implicit */int) var_10)) >= (((/* implicit */int) var_7)))))))))))));
                    var_17 = ((/* implicit */short) ((((/* implicit */int) ((((((/* implicit */_Bool) -7078159947937049366LL)) && (((/* implicit */_Bool) var_14)))) && (((((/* implicit */_Bool) arr_8 [i_0 + 1] [i_0 + 1])) || (((/* implicit */_Bool) arr_4 [i_0] [i_1] [i_2]))))))) == (((/* implicit */int) ((((arr_5 [(unsigned short)8]) - (((/* implicit */unsigned long long int) ((/* implicit */int) var_2))))) <= (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) arr_1 [(unsigned char)2] [7]))) > (726587965833444675LL))))))))));
                }
            } 
        } 
    } 
    /* LoopNest 3 */
    for (unsigned short i_3 = 0; i_3 < 20; i_3 += 1) 
    {
        for (int i_4 = 3; i_4 < 17; i_4 += 4) 
        {
            for (unsigned char i_5 = 1; i_5 < 17; i_5 += 4) 
            {
                {
                    var_18 = ((/* implicit */_Bool) min((var_18), (((((/* implicit */int) ((((/* implicit */int) ((((/* implicit */int) arr_11 [i_3] [i_3])) != (((/* implicit */int) var_2))))) > (((((/* implicit */int) var_2)) * (((/* implicit */int) (short)8191))))))) > (((/* implicit */int) ((((/* implicit */long long int) ((((/* implicit */int) arr_14 [i_3])) >> (((((/* implicit */int) (unsigned short)8485)) - (8481)))))) < (((726587965833444675LL) ^ (((/* implicit */long long int) 138276392U)))))))))));
                    var_19 *= ((/* implicit */unsigned char) ((((/* implicit */int) ((((/* implicit */int) ((((/* implicit */_Bool) (unsigned char)17)) && (((/* implicit */_Bool) 4156690903U))))) <= (((/* implicit */int) ((((/* implicit */int) var_2)) > (arr_9 [(unsigned short)2]))))))) ^ (((/* implicit */int) ((((/* implicit */int) ((((/* implicit */int) (unsigned short)8485)) != (((/* implicit */int) var_13))))) < (((/* implicit */int) ((((/* implicit */int) arr_13 [i_3] [i_3] [i_5])) == (((/* implicit */int) var_4))))))))));
                    arr_19 [i_3] [i_3] [i_5] [i_3] = ((/* implicit */unsigned int) ((((((-726587965833444651LL) - (((/* implicit */long long int) ((/* implicit */int) var_9))))) <= (((/* implicit */long long int) ((arr_17 [(_Bool)1] [i_4] [i_5]) ^ (((/* implicit */int) arr_15 [i_3] [i_4 - 1] [i_4 - 1] [i_5]))))))) && (((((/* implicit */_Bool) ((((/* implicit */int) (unsigned char)213)) ^ (((/* implicit */int) (unsigned short)57058))))) && (((var_5) > (((/* implicit */unsigned long long int) 726587965833444650LL))))))));
                }
            } 
        } 
    } 
}
