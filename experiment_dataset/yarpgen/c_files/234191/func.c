/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 234191
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=234191 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/234191
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
    for (unsigned char i_0 = 0; i_0 < 11; i_0 += 1) 
    {
        for (unsigned int i_1 = 0; i_1 < 11; i_1 += 2) 
        {
            {
                var_13 = ((/* implicit */int) 4294967286U);
                arr_8 [i_0] [(_Bool)1] [i_0] = ((/* implicit */short) max((((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) 9U)) ? (-2072632858) : (((/* implicit */int) (unsigned short)60358)))) | (((/* implicit */int) min((((/* implicit */unsigned short) (short)25258)), ((unsigned short)0))))))), ((~(((unsigned long long int) 11U))))));
                var_14 = ((/* implicit */unsigned short) (-(((((/* implicit */int) (_Bool)1)) | (((/* implicit */int) ((4294967286U) == (((/* implicit */unsigned int) ((/* implicit */int) (short)-2048))))))))));
                var_15 -= ((/* implicit */unsigned short) (short)-7054);
                var_16 = ((/* implicit */_Bool) (~(4294967286U)));
            }
        } 
    } 
    var_17 = ((/* implicit */unsigned long long int) min(((((+(((/* implicit */int) (unsigned char)34)))) * (((((/* implicit */int) (short)2064)) / (((/* implicit */int) (unsigned short)2418)))))), (((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) (unsigned short)63126)) != (((/* implicit */int) (short)-2048)))))) >= (((4559105206728175246ULL) >> (((953751410) - (953751351))))))))));
    var_18 = ((/* implicit */unsigned short) ((long long int) (((((_Bool)1) ? (11U) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-89))))) > (((/* implicit */unsigned int) ((((/* implicit */_Bool) 11U)) ? (((/* implicit */int) (short)-2075)) : (((/* implicit */int) (signed char)-115))))))));
}
