/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 45071
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=45071 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/45071
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
    var_15 = ((/* implicit */unsigned short) ((((/* implicit */long long int) ((/* implicit */int) (signed char)-1))) | (-1209340058130851353LL)));
    /* LoopSeq 1 */
    for (signed char i_0 = 0; i_0 < 15; i_0 += 3) 
    {
        arr_4 [i_0] = ((/* implicit */unsigned int) (-(((/* implicit */int) var_1))));
        var_16 = ((/* implicit */unsigned short) max((var_16), (((/* implicit */unsigned short) min((arr_1 [i_0]), (((((/* implicit */_Bool) arr_3 [i_0])) ? (min((arr_1 [i_0]), (((/* implicit */unsigned long long int) arr_3 [i_0])))) : (((/* implicit */unsigned long long int) max((arr_0 [i_0] [i_0]), (((/* implicit */int) var_12))))))))))));
        /* LoopSeq 2 */
        for (unsigned long long int i_1 = 0; i_1 < 15; i_1 += 3) 
        {
            arr_8 [i_0] [i_0] [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) max((((/* implicit */unsigned int) ((short) var_7))), (((unsigned int) -1209340058130851354LL))))) ? (((((/* implicit */_Bool) -1209340058130851359LL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((_Bool) var_2)))) : (arr_1 [i_0]))) : (((((_Bool) 0)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_2 [i_0]))) : (((((/* implicit */_Bool) (unsigned char)164)) ? (11062934974099619572ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)174)))))))));
            arr_9 [i_0] [i_0] = max((((/* implicit */unsigned int) (unsigned short)40596)), (((((/* implicit */_Bool) arr_5 [i_0] [i_1] [i_0])) ? (((/* implicit */unsigned int) (+(((/* implicit */int) arr_2 [i_0]))))) : (((((/* implicit */_Bool) (unsigned char)157)) ? (1062207257U) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-79))))))));
        }
        for (int i_2 = 0; i_2 < 15; i_2 += 3) 
        {
            /* LoopNest 2 */
            for (signed char i_3 = 0; i_3 < 15; i_3 += 1) 
            {
                for (signed char i_4 = 1; i_4 < 14; i_4 += 4) 
                {
                    {
                        var_17 = arr_2 [i_0];
                        arr_20 [i_0] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) (signed char)-5)), (max((arr_5 [i_0] [i_2] [i_0]), (((/* implicit */unsigned long long int) var_2))))))) ? (((/* implicit */long long int) ((unsigned int) (-(15728640))))) : ((+(-3161500670485574042LL)))));
                        var_18 *= ((/* implicit */_Bool) min((min((((((/* implicit */_Bool) var_9)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_6))) : (11062934974099619574ULL))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (signed char)-85)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)170))) : (2768684328U)))))), (((/* implicit */unsigned long long int) arr_7 [i_0]))));
                    }
                } 
            } 
            arr_21 [i_0] [i_0] = ((/* implicit */unsigned int) ((signed char) max((((/* implicit */int) var_1)), (997638081))));
            arr_22 [i_0] [i_2] = ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) min((((int) arr_17 [i_0] [i_2])), ((+(arr_17 [i_0] [i_0])))))) | (max((arr_5 [i_0] [i_0] [i_0]), (((/* implicit */unsigned long long int) (signed char)-63))))));
        }
    }
    var_19 = (((+(((/* implicit */int) max((((/* implicit */unsigned short) (short)-21936)), (var_10)))))) != (((/* implicit */int) var_8)));
    var_20 = ((/* implicit */unsigned long long int) (-(min(((-(((/* implicit */int) (_Bool)1)))), (((((/* implicit */_Bool) 2922339791U)) ? (((/* implicit */int) var_0)) : (((/* implicit */int) var_0))))))));
    var_21 = ((/* implicit */signed char) (!(((/* implicit */_Bool) min(((signed char)107), ((signed char)123))))));
}
