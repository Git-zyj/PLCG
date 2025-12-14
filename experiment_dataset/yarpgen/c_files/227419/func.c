/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 227419
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=227419 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/227419
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
    var_17 += ((/* implicit */long long int) ((signed char) -7398192288676581341LL));
    /* LoopNest 3 */
    for (unsigned char i_0 = 0; i_0 < 14; i_0 += 4) 
    {
        for (unsigned short i_1 = 0; i_1 < 14; i_1 += 2) 
        {
            for (unsigned short i_2 = 0; i_2 < 14; i_2 += 2) 
            {
                {
                    var_18 = ((/* implicit */unsigned char) max((((max((-8455529941697213491LL), (((/* implicit */long long int) (short)512)))) * (((/* implicit */long long int) ((int) arr_5 [i_0] [i_2]))))), ((-(arr_9 [i_1])))));
                    /* LoopSeq 1 */
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        arr_13 [i_3] [i_2] [i_2] [i_1] [0] [i_3] = max(((-(((var_10) % (((/* implicit */long long int) ((/* implicit */int) arr_2 [i_0] [i_1]))))))), (((/* implicit */long long int) ((((/* implicit */int) max((var_7), (var_7)))) | (((/* implicit */int) ((unsigned short) -7398192288676581341LL)))))));
                        /* LoopSeq 1 */
                        /* vectorizable */
                        for (unsigned char i_4 = 0; i_4 < 14; i_4 += 3) 
                        {
                            arr_18 [i_0] [i_3] [i_2] [i_2] [i_3] = ((/* implicit */unsigned short) var_1);
                            var_19 = ((/* implicit */unsigned short) ((_Bool) arr_6 [i_1] [i_2] [i_3]));
                        }
                        arr_19 [i_3] [i_2] [i_1] [i_3] = var_7;
                    }
                    var_20 += ((((/* implicit */_Bool) (+((-(((/* implicit */int) (unsigned short)59101))))))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) 1456864952)) ? ((-(((/* implicit */int) (unsigned short)59101)))) : (-1456864937)))) : ((-(max((((/* implicit */long long int) arr_8 [i_0] [i_1])), (arr_14 [i_0] [i_1] [i_2] [i_1] [i_1]))))));
                }
            } 
        } 
    } 
    var_21 += ((int) (((-(var_2))) % (min((((/* implicit */long long int) var_16)), (var_10)))));
    /* LoopSeq 2 */
    for (short i_5 = 1; i_5 < 13; i_5 += 4) 
    {
        var_22 ^= ((/* implicit */unsigned char) ((long long int) (~(max((arr_21 [i_5]), (((/* implicit */long long int) var_1)))))));
        var_23 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (~(min((((/* implicit */int) var_6)), (1456864936)))))) ? (arr_20 [i_5] [i_5]) : (7398192288676581340LL)));
    }
    for (_Bool i_6 = 1; i_6 < 1; i_6 += 1) 
    {
        arr_25 [i_6 - 1] = ((/* implicit */long long int) ((((/* implicit */_Bool) (+(var_1)))) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_24 [i_6 - 1]))) : (((unsigned int) arr_24 [i_6 - 1]))));
        arr_26 [i_6 - 1] = ((/* implicit */signed char) 7004435335660743455LL);
    }
    /* LoopNest 2 */
    for (unsigned long long int i_7 = 0; i_7 < 14; i_7 += 4) 
    {
        for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
        {
            {
                var_24 = ((/* implicit */unsigned char) ((short) ((((/* implicit */_Bool) (-(((/* implicit */int) (short)-19610))))) ? (((((/* implicit */_Bool) (signed char)-57)) ? (((/* implicit */long long int) var_13)) : (-7004435335660743447LL))) : (((/* implicit */long long int) (~(((/* implicit */int) (_Bool)0))))))));
                var_25 -= arr_21 [i_7];
                var_26 = ((((/* implicit */_Bool) (-(((600394454363263105LL) + (((/* implicit */long long int) -1456864947))))))) ? (((((/* implicit */_Bool) max((7004435335660743455LL), (((/* implicit */long long int) 2147483647))))) ? (((/* implicit */long long int) ((/* implicit */int) var_12))) : (((((/* implicit */_Bool) 3923165387450637229LL)) ? (arr_21 [i_7]) : (((/* implicit */long long int) var_4)))))) : (7286015809122469255LL));
                arr_33 [i_7] [(_Bool)1] [(_Bool)1] = ((/* implicit */int) ((((/* implicit */_Bool) ((unsigned char) max((var_9), (((/* implicit */short) (unsigned char)192)))))) ? (var_2) : (((((/* implicit */_Bool) ((unsigned char) var_10))) ? (((/* implicit */long long int) (-(arr_8 [i_8] [i_7])))) : (((long long int) var_12))))));
            }
        } 
    } 
}
