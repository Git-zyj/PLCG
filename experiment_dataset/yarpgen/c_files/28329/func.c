/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 28329
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=28329 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/28329
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
    var_12 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_4)) ? ((+(var_11))) : (((var_5) - (var_4)))))) ? ((~(var_5))) : (((((/* implicit */int) var_10)) << (((/* implicit */int) var_3))))));
    var_13 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) (((!(var_3))) && (((((/* implicit */_Bool) -884661490416244385LL)) || (((/* implicit */_Bool) 3877530853U))))))) : (((/* implicit */int) (!((!(((/* implicit */_Bool) var_2)))))))));
    /* LoopNest 2 */
    for (signed char i_0 = 3; i_0 < 6; i_0 += 2) 
    {
        for (int i_1 = 1; i_1 < 6; i_1 += 3) 
        {
            {
                arr_6 [i_1] [i_1] [i_1] = ((((/* implicit */unsigned int) (~(((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) var_10)) : (((/* implicit */int) var_10))))))) & ((((_Bool)1) ? (((((/* implicit */_Bool) var_2)) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)0))) : (3877530853U))) : (3877530848U))));
                /* LoopSeq 1 */
                for (unsigned int i_2 = 3; i_2 < 9; i_2 += 3) 
                {
                    var_14 ^= ((/* implicit */unsigned short) ((((/* implicit */int) ((((/* implicit */_Bool) var_4)) && (((((/* implicit */int) var_8)) <= (((/* implicit */int) var_8))))))) * (((/* implicit */int) ((((((/* implicit */_Bool) var_5)) ? (var_11) : (var_7))) < (((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) var_6)) : (var_11))))))));
                    arr_10 [i_0] [i_1] [i_1] [i_0] = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) var_11)) ? (((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) var_9)) : (var_7))) : (((/* implicit */int) (!(((/* implicit */_Bool) var_2))))))) / ((+(((((/* implicit */int) var_9)) * (((/* implicit */int) var_8))))))));
                    arr_11 [i_0] [i_1] [i_1] [i_0 + 1] = ((/* implicit */signed char) (~((((!(((/* implicit */_Bool) 2146435072ULL)))) ? (((/* implicit */int) (!(((/* implicit */_Bool) var_11))))) : (((((/* implicit */int) var_2)) ^ (((/* implicit */int) var_0))))))));
                    var_15 = ((/* implicit */unsigned char) (-(3877530853U)));
                    var_16 += ((/* implicit */int) ((((/* implicit */int) (!(((/* implicit */_Bool) (-(((/* implicit */int) var_0)))))))) <= ((-(((((/* implicit */_Bool) var_9)) ? (var_4) : (((/* implicit */int) var_6))))))));
                }
            }
        } 
    } 
    var_17 += ((/* implicit */unsigned short) (+(((2146435057ULL) & (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-119)))))));
    /* LoopNest 3 */
    for (unsigned short i_3 = 0; i_3 < 10; i_3 += 2) 
    {
        for (unsigned char i_4 = 1; i_4 < 8; i_4 += 2) 
        {
            for (long long int i_5 = 0; i_5 < 10; i_5 += 4) 
            {
                {
                    var_18 *= ((/* implicit */short) (((((~(var_4))) >= (((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) var_6)) : (((/* implicit */int) var_3)))))) ? ((+(((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) var_8)) : (var_5))))) : (((((/* implicit */_Bool) ((((/* implicit */int) var_3)) % (((/* implicit */int) var_8))))) ? (((/* implicit */int) var_10)) : ((+(((/* implicit */int) var_9))))))));
                    arr_19 [i_5] [i_4] [i_3] = ((((/* implicit */long long int) (~(((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) var_0)) : (var_5)))))) | ((((-(4517518519252307272LL))) - (((/* implicit */long long int) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) var_8)) : (((/* implicit */int) var_10))))))));
                    arr_20 [i_5] = ((/* implicit */unsigned int) ((((/* implicit */long long int) (+(((((/* implicit */_Bool) var_2)) ? (var_7) : (var_5)))))) <= (((((/* implicit */_Bool) var_4)) ? (((1675567292283300679LL) & (((/* implicit */long long int) -1482006115)))) : (((/* implicit */long long int) (~(var_4))))))));
                }
            } 
        } 
    } 
}
