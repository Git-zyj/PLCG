/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 27661
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=27661 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/27661
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
    for (long long int i_0 = 1; i_0 < 13; i_0 += 3) 
    {
        arr_2 [i_0] = ((/* implicit */_Bool) ((long long int) (short)4095));
        arr_3 [i_0 + 1] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) (!(arr_0 [i_0 + 2])))) : (((/* implicit */int) ((((/* implicit */_Bool) arr_1 [i_0 + 2] [i_0])) || (((/* implicit */_Bool) 18446744073709551601ULL)))))));
    }
    for (signed char i_1 = 0; i_1 < 14; i_1 += 2) 
    {
        /* LoopNest 2 */
        for (unsigned short i_2 = 2; i_2 < 12; i_2 += 3) 
        {
            for (short i_3 = 0; i_3 < 14; i_3 += 3) 
            {
                {
                    arr_13 [i_1] [(signed char)10] [i_3] = (~((-(((/* implicit */int) (short)-4097)))));
                    arr_14 [i_2 + 2] [(signed char)13] [i_3] = ((/* implicit */unsigned short) ((((((/* implicit */unsigned long long int) ((/* implicit */int) arr_12 [i_2 + 2] [i_1]))) ^ (4337270376183558140ULL))) == (((/* implicit */unsigned long long int) (-(((/* implicit */int) (short)-4119)))))));
                    arr_15 [i_1] [i_2 - 2] [i_3] [i_1] = ((/* implicit */short) (_Bool)1);
                    arr_16 [i_1] [5LL] [i_3] = ((/* implicit */unsigned int) (((((~((~(-536870912))))) + (2147483647))) >> (((((min((((/* implicit */unsigned long long int) 1040187392U)), (arr_9 [i_2] [(unsigned char)0]))) ^ (((/* implicit */unsigned long long int) (~(((/* implicit */int) var_4))))))) - (1040197195ULL)))));
                }
            } 
        } 
        arr_17 [i_1] = ((/* implicit */signed char) max((((((/* implicit */int) var_2)) / (((/* implicit */int) (unsigned short)63686)))), (((/* implicit */int) ((unsigned short) var_7)))));
        arr_18 [i_1] = ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) arr_1 [1ULL] [i_1])) && (((/* implicit */_Bool) var_2)))) ? (((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) var_7)) : (((/* implicit */int) var_5)))) : (((((/* implicit */_Bool) (signed char)-29)) ? (arr_1 [i_1] [i_1]) : (536870890)))));
        arr_19 [(_Bool)1] = ((/* implicit */short) (-((+((-(((/* implicit */int) (_Bool)1))))))));
        arr_20 [i_1] = ((/* implicit */signed char) (((!(((/* implicit */_Bool) (signed char)60)))) ? (((/* implicit */int) var_10)) : (((/* implicit */int) max(((short)24), (((/* implicit */short) (signed char)-10)))))));
    }
    var_14 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((unsigned char) var_4))) ? (4ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((short) var_2))))))) ? (((/* implicit */int) max((((short) 2192340560U)), (((/* implicit */short) var_7))))) : (((((((-1) + (2147483647))) << (((((-536870914) + (536870915))) - (1))))) / (((/* implicit */int) var_9)))));
    var_15 = ((/* implicit */signed char) ((((/* implicit */_Bool) 14109473697525993476ULL)) ? (min((((/* implicit */int) ((((/* implicit */int) (_Bool)1)) > (((/* implicit */int) (signed char)118))))), (((((/* implicit */_Bool) 1920U)) ? (((/* implicit */int) (signed char)5)) : (((/* implicit */int) (signed char)-12)))))) : (((/* implicit */int) (signed char)-77))));
    var_16 = ((/* implicit */_Bool) var_11);
    var_17 = ((/* implicit */int) min((var_0), (((signed char) (-(((/* implicit */int) var_11)))))));
}
