/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 190231
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=190231 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/190231
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
    for (unsigned short i_0 = 0; i_0 < 12; i_0 += 4) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 12; i_1 += 1) 
        {
            {
                var_17 = ((/* implicit */short) (+(max((((((/* implicit */int) (signed char)(-127 - 1))) * (((/* implicit */int) (unsigned char)215)))), (((/* implicit */int) (unsigned short)29530))))));
                var_18 = ((/* implicit */int) (signed char)-102);
                /* LoopNest 2 */
                for (unsigned long long int i_2 = 0; i_2 < 12; i_2 += 4) 
                {
                    for (unsigned char i_3 = 0; i_3 < 12; i_3 += 2) 
                    {
                        {
                            var_19 *= ((/* implicit */short) max(((unsigned short)49714), (((/* implicit */unsigned short) (unsigned char)248))));
                            var_20 = ((/* implicit */unsigned int) min((max((((((/* implicit */unsigned long long int) arr_7 [i_1] [i_1] [i_2] [i_0] [i_3] [i_2])) - (var_4))), (((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) (short)6367)), (3062053981U)))))), (((/* implicit */unsigned long long int) (unsigned char)0))));
                            arr_8 [i_1] [i_1] [i_1] [i_3] = ((/* implicit */long long int) (unsigned short)15827);
                            arr_9 [i_1] [i_1] [i_1] [(_Bool)1] [i_0] = ((/* implicit */short) (-(((((/* implicit */int) (unsigned short)15822)) + (((/* implicit */int) (unsigned char)0))))));
                            var_21 = ((((/* implicit */_Bool) (short)-6367)) ? (((((/* implicit */int) (unsigned short)49709)) - (((/* implicit */int) arr_2 [i_0] [i_1] [i_3])))) : (((/* implicit */int) min((var_5), ((signed char)81)))));
                        }
                    } 
                } 
            }
        } 
    } 
    var_22 -= ((/* implicit */unsigned long long int) ((long long int) max((((/* implicit */unsigned int) var_3)), (((((/* implicit */_Bool) 2576002366U)) ? (1718964922U) : (((/* implicit */unsigned int) ((/* implicit */int) (short)-6368))))))));
    /* LoopNest 3 */
    for (unsigned long long int i_4 = 0; i_4 < 20; i_4 += 2) 
    {
        for (int i_5 = 0; i_5 < 20; i_5 += 2) 
        {
            for (int i_6 = 0; i_6 < 20; i_6 += 3) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned short i_7 = 0; i_7 < 20; i_7 += 1) 
                    {
                        for (long long int i_8 = 0; i_8 < 20; i_8 += 4) 
                        {
                            {
                                arr_23 [i_4] [i_4] [i_6] [i_4] [i_6] = ((/* implicit */unsigned char) (unsigned short)49727);
                                var_23 = ((/* implicit */signed char) max((((/* implicit */int) ((((/* implicit */int) (unsigned char)18)) > (((/* implicit */int) arr_13 [i_5] [i_5] [i_8]))))), (((((/* implicit */int) arr_12 [i_4] [i_6] [i_7])) + (((/* implicit */int) (unsigned char)41))))));
                                arr_24 [i_4] [i_4] [i_4] [i_7] [i_4] [i_4] [i_5] = ((/* implicit */short) ((((/* implicit */int) (!((!(((/* implicit */_Bool) (unsigned char)168))))))) > (((/* implicit */int) ((((/* implicit */int) max(((unsigned char)166), ((unsigned char)166)))) > (((/* implicit */int) (short)-2934)))))));
                            }
                        } 
                    } 
                    var_24 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */int) (unsigned short)15827)) / (((/* implicit */int) (unsigned short)49709))))) || (((/* implicit */_Bool) min((((/* implicit */unsigned long long int) (unsigned char)198)), (arr_21 [i_4] [i_5] [i_5] [i_6] [i_6]))))));
                    arr_25 [i_4] [i_4] = ((/* implicit */_Bool) -1868439528);
                }
            } 
        } 
    } 
    var_25 += ((/* implicit */unsigned long long int) var_15);
    /* LoopNest 3 */
    for (signed char i_9 = 0; i_9 < 16; i_9 += 4) 
    {
        for (long long int i_10 = 0; i_10 < 16; i_10 += 2) 
        {
            for (unsigned short i_11 = 0; i_11 < 16; i_11 += 4) 
            {
                {
                    var_26 = ((/* implicit */unsigned long long int) ((short) ((((/* implicit */_Bool) 10795258213750970065ULL)) ? (((/* implicit */int) (unsigned char)77)) : (((/* implicit */int) (signed char)127)))));
                    arr_34 [i_9] [i_11] = ((((/* implicit */_Bool) max((((((/* implicit */_Bool) arr_27 [i_9])) ? (3) : (((/* implicit */int) arr_30 [i_10])))), (((/* implicit */int) ((unsigned char) (unsigned short)15809)))))) ? (((((/* implicit */_Bool) arr_26 [i_9])) ? (arr_26 [i_9]) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)163))))) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) ((long long int) 533862702U))) ? (((/* implicit */int) var_3)) : (((/* implicit */int) ((((/* implicit */int) var_11)) <= (268031569))))))));
                    var_27 = ((/* implicit */long long int) min(((short)32767), (((/* implicit */short) (!(((/* implicit */_Bool) arr_14 [i_9] [i_10])))))));
                }
            } 
        } 
    } 
}
