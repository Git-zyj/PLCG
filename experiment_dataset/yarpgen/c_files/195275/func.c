/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 195275
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=195275 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/195275
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
    for (long long int i_0 = 0; i_0 < 10; i_0 += 2) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                arr_5 [i_1] = ((/* implicit */unsigned long long int) ((short) (_Bool)0));
                /* LoopSeq 1 */
                for (signed char i_2 = 3; i_2 < 6; i_2 += 4) 
                {
                    arr_8 [i_1] [i_1] [i_1] [(unsigned short)0] = ((/* implicit */long long int) (((!((!(var_13))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_1)) ? (8U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)89)))))) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)167))) : (max((arr_7 [i_1]), (((/* implicit */long long int) (signed char)-86))))))) : (var_7)));
                    arr_9 [i_0] [i_1] [i_1] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((min((var_1), (((/* implicit */long long int) 4234686554U)))) >> (((/* implicit */int) ((((/* implicit */_Bool) var_17)) && (((/* implicit */_Bool) -9049094947136296014LL)))))))) ? (((/* implicit */unsigned long long int) max((-4782770430395555834LL), (-4782770430395555830LL)))) : (((((/* implicit */_Bool) -4782770430395555848LL)) ? (((((/* implicit */_Bool) var_7)) ? (((/* implicit */unsigned long long int) var_17)) : (var_0))) : (((/* implicit */unsigned long long int) (((_Bool)1) ? (var_8) : (((/* implicit */int) (_Bool)1)))))))));
                    arr_10 [i_1] [i_1] [i_1] = ((/* implicit */unsigned int) ((var_10) ? (((((/* implicit */_Bool) (-(var_1)))) ? (((((/* implicit */_Bool) arr_1 [i_0])) ? (var_12) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_6))))) : (((/* implicit */unsigned long long int) min((571020373), (((/* implicit */int) (unsigned char)167))))))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (-(((/* implicit */int) var_10))))) ? ((+(arr_7 [i_1]))) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)161))))))));
                }
                arr_11 [i_0] [i_0] = max((((/* implicit */long long int) ((((/* implicit */_Bool) (+(var_8)))) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) 117440512U)) ? (904356411) : (((/* implicit */int) var_6))))) : ((~(2612641889U)))))), (max((((/* implicit */long long int) ((var_9) ^ (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)147)))))), (((((/* implicit */_Bool) var_5)) ? (arr_0 [i_0]) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))))))));
                arr_12 [i_0] [i_0] &= ((/* implicit */_Bool) (-(((/* implicit */int) ((short) 1346336214595151271ULL)))));
                arr_13 [i_0] [i_1] [i_1] = ((/* implicit */long long int) min((min((2612641889U), (((/* implicit */unsigned int) (!(((/* implicit */_Bool) (short)7))))))), (((/* implicit */unsigned int) ((((/* implicit */_Bool) (((_Bool)1) ? (var_5) : (((/* implicit */long long int) ((/* implicit */int) var_15)))))) ? (((/* implicit */int) min(((unsigned char)140), ((unsigned char)161)))) : (((/* implicit */int) ((var_10) || (((/* implicit */_Bool) arr_0 [4U]))))))))));
            }
        } 
    } 
    var_19 = ((/* implicit */unsigned short) min((((((16696492773618683803ULL) & (12716283951325471313ULL))) / (((/* implicit */unsigned long long int) -7377664604020162679LL)))), (((/* implicit */unsigned long long int) max((var_16), (((/* implicit */short) ((((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) < (var_7)))))))));
}
