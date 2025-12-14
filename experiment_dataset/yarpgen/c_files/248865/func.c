/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 248865
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=248865 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/248865
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
    var_12 = ((/* implicit */_Bool) var_2);
    var_13 = ((/* implicit */long long int) ((((((/* implicit */_Bool) var_8)) && (((/* implicit */_Bool) min((var_2), (var_2)))))) ? (((/* implicit */int) (!(((((/* implicit */_Bool) var_9)) && (((/* implicit */_Bool) var_0))))))) : (((/* implicit */int) var_4))));
    /* LoopSeq 2 */
    for (unsigned long long int i_0 = 0; i_0 < 22; i_0 += 2) 
    {
        /* LoopNest 3 */
        for (int i_1 = 2; i_1 < 21; i_1 += 2) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                for (unsigned int i_3 = 0; i_3 < 22; i_3 += 1) 
                {
                    {
                        var_14 &= min(((-((-(var_7))))), (((((/* implicit */_Bool) 482004987)) ? (2637426786952524362ULL) : (((/* implicit */unsigned long long int) 507259789428235124LL)))));
                        arr_9 [i_0] [i_3] [i_2] [i_2] = (-(var_7));
                        var_15 -= ((/* implicit */unsigned long long int) var_8);
                    }
                } 
            } 
        } 
        var_16 = ((/* implicit */unsigned char) ((unsigned long long int) ((unsigned int) var_10)));
    }
    for (short i_4 = 0; i_4 < 16; i_4 += 2) 
    {
        var_17 += ((/* implicit */unsigned short) ((((/* implicit */_Bool) min((arr_3 [i_4]), (arr_1 [i_4])))) ? ((~(((((/* implicit */unsigned int) ((/* implicit */int) (signed char)-11))) - (var_8))))) : (((/* implicit */unsigned int) ((/* implicit */int) ((_Bool) (unsigned char)182))))));
        var_18 = ((/* implicit */unsigned char) max((var_18), (((/* implicit */unsigned char) ((((/* implicit */_Bool) ((unsigned short) 15809317286757027253ULL))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_4 [i_4])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_6 [i_4] [i_4]))) : (var_2)))) ? (((((/* implicit */_Bool) (unsigned char)192)) ? (15809317286757027253ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_8 [(unsigned short)1] [(unsigned short)1]))))) : (((((/* implicit */_Bool) 2637426786952524363ULL)) ? (2637426786952524362ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_10))))))) : (((/* implicit */unsigned long long int) min(((+(arr_5 [i_4] [i_4] [i_4] [i_4]))), ((-(-2147483628)))))))))));
    }
    var_19 &= ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) (!(((/* implicit */_Bool) (-(((/* implicit */int) var_10)))))))) : (((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) var_1)) : (((/* implicit */int) (_Bool)1))))))))));
}
