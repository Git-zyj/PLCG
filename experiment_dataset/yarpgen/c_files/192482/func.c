/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 192482
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=192482 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/192482
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
    for (int i_0 = 2; i_0 < 9; i_0 += 3) 
    {
        arr_3 [i_0] = ((/* implicit */unsigned long long int) (+(((((/* implicit */_Bool) 1033199425004393488LL)) ? (-1033199425004393489LL) : (((/* implicit */long long int) ((/* implicit */int) arr_1 [i_0 - 2])))))));
        arr_4 [i_0] = ((/* implicit */int) ((unsigned long long int) max(((~(var_4))), ((-(((/* implicit */int) arr_2 [i_0] [i_0])))))));
        /* LoopNest 3 */
        for (unsigned int i_1 = 4; i_1 < 9; i_1 += 4) 
        {
            for (int i_2 = 0; i_2 < 10; i_2 += 2) 
            {
                for (unsigned short i_3 = 2; i_3 < 8; i_3 += 2) 
                {
                    {
                        arr_13 [i_3] [i_3 - 2] [2U] [i_3] = ((/* implicit */_Bool) ((((/* implicit */int) (signed char)63)) ^ ((-((-(99795370)))))));
                        var_14 -= ((/* implicit */unsigned short) arr_12 [i_0] [i_0 - 1] [i_0] [i_2] [i_3]);
                        var_15 = ((/* implicit */int) ((((/* implicit */long long int) max((2889547540U), (2025715679U)))) < (-1033199425004393484LL)));
                    }
                } 
            } 
        } 
    }
    /* vectorizable */
    for (unsigned long long int i_4 = 0; i_4 < 17; i_4 += 2) 
    {
        arr_16 [i_4] |= ((/* implicit */int) (+((+(var_2)))));
        /* LoopNest 2 */
        for (short i_5 = 1; i_5 < 15; i_5 += 2) 
        {
            for (unsigned long long int i_6 = 2; i_6 < 15; i_6 += 2) 
            {
                {
                    var_16 ^= ((/* implicit */short) (signed char)96);
                    arr_22 [i_6] [i_4] [i_4] = ((((/* implicit */unsigned long long int) arr_19 [i_4] [i_4] [i_6 - 1])) * (10084733709969891915ULL));
                    /* LoopNest 2 */
                    for (unsigned short i_7 = 0; i_7 < 17; i_7 += 4) 
                    {
                        for (unsigned char i_8 = 1; i_8 < 16; i_8 += 4) 
                        {
                            {
                                var_17 += ((/* implicit */_Bool) ((int) var_8));
                                arr_29 [i_4] [i_4] [15U] [i_4] [i_4] [i_4] = ((/* implicit */long long int) ((((/* implicit */unsigned long long int) (+(arr_19 [i_4] [i_4] [i_4])))) >= (((8362010363739659701ULL) ^ (((/* implicit */unsigned long long int) arr_23 [i_8] [i_7] [i_5] [i_5] [i_4]))))));
                                var_18 -= ((/* implicit */short) ((((/* implicit */_Bool) 1033199425004393499LL)) ? (0ULL) : (8362010363739659700ULL)));
                            }
                        } 
                    } 
                    var_19 = ((/* implicit */unsigned long long int) (+(arr_19 [i_6 + 1] [i_6] [i_6])));
                }
            } 
        } 
        var_20 = ((/* implicit */short) (+(((((/* implicit */_Bool) (unsigned char)0)) ? (arr_27 [i_4] [i_4] [i_4] [i_4] [7] [i_4]) : (arr_14 [(_Bool)1])))));
    }
    var_21 |= ((/* implicit */unsigned long long int) (~(var_10)));
    var_22 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */unsigned long long int) max((var_2), (3221225472U)))) : (max((((/* implicit */unsigned long long int) min((var_1), ((unsigned char)138)))), (8362010363739659680ULL)))));
    var_23 |= ((/* implicit */long long int) var_7);
}
