/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 248828
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=248828 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/248828
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
    /* LoopNest 3 */
    for (unsigned long long int i_0 = 1; i_0 < 15; i_0 += 1) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 16; i_2 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (long long int i_3 = 0; i_3 < 16; i_3 += 3) 
                    {
                        for (unsigned int i_4 = 0; i_4 < 16; i_4 += 2) 
                        {
                            {
                                var_19 = ((/* implicit */short) min((var_19), (((short) min(((-(((/* implicit */int) (signed char)-1)))), ((-(((/* implicit */int) var_16)))))))));
                                var_20 = ((/* implicit */long long int) (~((+(((/* implicit */int) max(((signed char)0), ((signed char)4))))))));
                                var_21 *= ((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((max((((/* implicit */unsigned long long int) (unsigned char)89)), (17239165808517822664ULL))) >> (((/* implicit */int) ((var_1) == (((/* implicit */int) arr_5 [i_0] [i_1]))))))))));
                                var_22 = ((/* implicit */short) (~(((/* implicit */int) ((_Bool) (+(((/* implicit */int) (signed char)13))))))));
                            }
                        } 
                    } 
                    /* LoopSeq 2 */
                    for (short i_5 = 1; i_5 < 15; i_5 += 1) /* same iter space */
                    {
                        arr_19 [i_0] [i_1] [i_2] [i_5] [i_0] = ((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned char)211)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-100))) : (4361957946804826751ULL)));
                        /* LoopSeq 2 */
                        for (unsigned char i_6 = 1; i_6 < 15; i_6 += 1) /* same iter space */
                        {
                            arr_22 [i_0] [i_0] [i_6] [i_0] [i_0 + 1] = ((/* implicit */short) ((((/* implicit */_Bool) 32512ULL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)64))) : (18326008304781722799ULL)));
                            var_23 *= ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((((/* implicit */unsigned long long int) var_11)) / (arr_9 [i_0] [i_1] [i_2] [i_5]))) * (((/* implicit */unsigned long long int) (+(var_11))))))) ? (((/* implicit */long long int) ((((/* implicit */unsigned int) ((((/* implicit */int) (signed char)13)) - (((/* implicit */int) (unsigned char)64))))) / (((((/* implicit */_Bool) var_6)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)155))) : (2196899087U)))))) : (((((((/* implicit */_Bool) 1526064720)) ? (arr_21 [i_0] [i_1] [i_2] [i_2] [i_6 + 1] [i_1]) : (((/* implicit */long long int) ((/* implicit */int) var_3))))) - (((/* implicit */long long int) ((arr_1 [i_0] [i_0]) / (arr_1 [i_5] [i_6]))))))));
                        }
                        for (unsigned char i_7 = 1; i_7 < 15; i_7 += 1) /* same iter space */
                        {
                            arr_26 [i_0] [i_1] [i_5] [i_5] [i_7] = ((/* implicit */int) ((((/* implicit */int) (((!(((/* implicit */_Bool) -1143081051)))) && (((var_16) && (((/* implicit */_Bool) arr_9 [i_7] [i_0] [i_1] [i_0]))))))) > ((~(((/* implicit */int) (signed char)-100))))));
                            arr_27 [i_0 - 1] [i_1] [i_1] [i_2] [i_5] [i_7] [i_7 + 1] |= ((/* implicit */unsigned char) (~(((((/* implicit */_Bool) (signed char)-1)) ? (((/* implicit */int) (signed char)-29)) : (((/* implicit */int) (short)-3614))))));
                        }
                    }
                    for (short i_8 = 1; i_8 < 15; i_8 += 1) /* same iter space */
                    {
                        /* LoopSeq 1 */
                        for (unsigned long long int i_9 = 1; i_9 < 15; i_9 += 3) 
                        {
                            arr_34 [i_8] [i_8] = ((/* implicit */unsigned int) (~(0LL)));
                            var_24 = ((/* implicit */int) ((_Bool) (-(((/* implicit */int) ((unsigned char) (short)-15288))))));
                            arr_35 [i_2] [i_8] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (-((+(((/* implicit */int) (signed char)-46))))))) ? (((((/* implicit */_Bool) (-(((/* implicit */int) (_Bool)1))))) ? (((/* implicit */long long int) ((((/* implicit */int) var_0)) * (((/* implicit */int) var_14))))) : (((((/* implicit */_Bool) -507516718)) ? (((/* implicit */long long int) 868795123)) : (2305702271725338624LL))))) : (((/* implicit */long long int) ((unsigned int) max((var_8), (((/* implicit */short) (unsigned char)16))))))));
                        }
                        var_25 = ((/* implicit */signed char) (((!(((/* implicit */_Bool) (signed char)6)))) ? (((18326008304781722799ULL) & (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)58))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((int) arr_33 [i_8] [i_2] [i_2] [i_1] [i_8])) > (((/* implicit */int) ((((/* implicit */int) var_8)) >= (((/* implicit */int) arr_18 [i_0])))))))))));
                    }
                    arr_36 [i_0] [i_1] [i_1] = ((/* implicit */unsigned long long int) (+((-(107478501644816146LL)))));
                }
            } 
        } 
    } 
    var_26 = ((/* implicit */short) min(((~(((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)74))) ^ (16849066322018435450ULL))))), (((/* implicit */unsigned long long int) (short)-29561))));
}
