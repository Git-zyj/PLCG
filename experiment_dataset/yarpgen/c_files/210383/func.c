/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 210383
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=210383 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/210383
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
    /* LoopNest 2 */
    for (unsigned char i_0 = 2; i_0 < 18; i_0 += 4) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 20; i_1 += 2) 
        {
            {
                var_17 = ((/* implicit */short) min((var_17), (((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)65523)) ? (((/* implicit */int) arr_2 [i_0 - 2] [i_0 - 2])) : (((/* implicit */int) arr_2 [i_0 - 2] [i_1]))))) ? (((/* implicit */int) min((((/* implicit */short) ((((/* implicit */int) arr_3 [i_0] [i_1])) >= (((/* implicit */int) (unsigned char)183))))), (((short) -1300507579))))) : ((-(((/* implicit */int) var_13)))))))));
                var_18 -= ((/* implicit */unsigned int) ((6485564653126161261ULL) << (((((/* implicit */int) (unsigned char)148)) - (86)))));
                var_19 -= max((((arr_2 [i_0 - 2] [i_0 + 2]) ? (((/* implicit */int) arr_2 [i_0] [i_1])) : (((/* implicit */int) arr_2 [i_0 + 2] [i_0 + 2])))), (((/* implicit */int) (signed char)31)));
            }
        } 
    } 
    /* LoopNest 2 */
    for (unsigned char i_2 = 1; i_2 < 10; i_2 += 2) 
    {
        for (long long int i_3 = 0; i_3 < 12; i_3 += 1) 
        {
            {
                /* LoopNest 3 */
                for (long long int i_4 = 0; i_4 < 12; i_4 += 2) 
                {
                    for (unsigned char i_5 = 0; i_5 < 12; i_5 += 1) 
                    {
                        for (signed char i_6 = 1; i_6 < 10; i_6 += 1) 
                        {
                            {
                                var_20 = ((/* implicit */unsigned char) max((var_20), (((/* implicit */unsigned char) ((unsigned long long int) (signed char)119)))));
                                var_21 = (-(((/* implicit */int) ((short) ((((/* implicit */_Bool) var_15)) ? (((/* implicit */int) var_1)) : (((/* implicit */int) var_13)))))));
                                var_22 = ((/* implicit */signed char) ((((/* implicit */_Bool) (((!((_Bool)1))) ? (((/* implicit */int) ((((/* implicit */_Bool) (short)-20596)) && (((/* implicit */_Bool) arr_12 [i_2] [i_4] [i_4] [i_3]))))) : (((/* implicit */int) var_13))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (!((!(((/* implicit */_Bool) (signed char)98)))))))) : (min((((/* implicit */unsigned long long int) (signed char)17)), (5550628310177700224ULL)))));
                            }
                        } 
                    } 
                } 
                var_23 = ((/* implicit */signed char) 4125793087359470448ULL);
                var_24 = ((/* implicit */long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_13)) ? (((/* implicit */int) (short)20595)) : (((/* implicit */int) ((unsigned char) var_5))))))));
                arr_18 [i_2] [i_3] [i_3] = ((/* implicit */short) ((((/* implicit */_Bool) ((unsigned char) ((((/* implicit */_Bool) var_11)) ? (var_16) : (var_2))))) ? (((/* implicit */long long int) ((/* implicit */int) arr_4 [i_2]))) : (((((/* implicit */_Bool) var_15)) ? (((((/* implicit */_Bool) (short)20593)) ? (((/* implicit */long long int) arr_10 [i_2] [i_2] [i_2])) : (-7235724859636357610LL))) : (((/* implicit */long long int) ((/* implicit */int) max((arr_6 [i_3] [i_3]), (((/* implicit */unsigned short) var_1))))))))));
            }
        } 
    } 
    var_25 &= ((/* implicit */unsigned short) (+((-(max((((/* implicit */unsigned int) (short)-20599)), (var_4)))))));
    var_26 = ((((/* implicit */_Bool) var_6)) ? (var_4) : (((/* implicit */unsigned int) ((/* implicit */int) ((((((/* implicit */_Bool) (short)-1)) ? (((/* implicit */int) (unsigned short)65524)) : (((/* implicit */int) (unsigned short)61493)))) != ((+(var_3))))))));
}
