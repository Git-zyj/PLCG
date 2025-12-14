/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 20691
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=20691 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/20691
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
    var_17 ^= ((/* implicit */int) (+((-(min((var_9), (((/* implicit */unsigned int) 94567685))))))));
    var_18 = ((/* implicit */short) ((((/* implicit */_Bool) (-(var_9)))) ? ((-((+(11439569928297852168ULL))))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_2)) ? (((var_1) / (((/* implicit */unsigned int) var_2)))) : (var_6))))));
    var_19 = ((/* implicit */short) var_8);
    var_20 = ((/* implicit */unsigned char) max((max((((/* implicit */unsigned long long int) (unsigned char)0)), (((((/* implicit */_Bool) var_7)) ? (((/* implicit */unsigned long long int) var_12)) : (11702189274635959786ULL))))), (((unsigned long long int) ((unsigned long long int) var_6)))));
    /* LoopSeq 1 */
    for (unsigned long long int i_0 = 1; i_0 < 15; i_0 += 2) 
    {
        /* LoopNest 3 */
        for (unsigned short i_1 = 0; i_1 < 18; i_1 += 2) 
        {
            for (int i_2 = 0; i_2 < 18; i_2 += 2) 
            {
                for (signed char i_3 = 2; i_3 < 15; i_3 += 2) 
                {
                    {
                        var_21 = ((/* implicit */short) ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) arr_10 [i_0 + 3] [i_3 + 2] [(short)0] [i_3])), (13558366101917833968ULL)))) ? ((+((+(var_3))))) : (((/* implicit */unsigned int) (-(((/* implicit */int) max((var_5), (((/* implicit */short) (_Bool)1))))))))));
                        arr_11 [i_3] [i_2] [i_0] [i_0] [i_0] = (-(((/* implicit */int) max(((unsigned char)0), ((unsigned char)0)))));
                        var_22 = ((/* implicit */long long int) (((+(var_3))) / (((/* implicit */unsigned int) ((/* implicit */int) (short)4841)))));
                        var_23 = ((/* implicit */unsigned short) ((((int) max((var_9), (((/* implicit */unsigned int) (unsigned char)255))))) > (((/* implicit */int) var_0))));
                    }
                } 
            } 
        } 
        var_24 = ((/* implicit */unsigned long long int) min((var_24), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((arr_2 [i_0 + 1] [i_0 + 3]) ? (max((((/* implicit */int) (unsigned char)193)), (arr_9 [i_0 + 3] [i_0] [i_0] [i_0]))) : ((+(((/* implicit */int) (short)-21592))))))) ? (max((((/* implicit */long long int) (+(var_6)))), ((-(var_4))))) : (((/* implicit */long long int) ((/* implicit */int) arr_8 [i_0] [i_0] [(unsigned char)11] [i_0]))))))));
        /* LoopNest 2 */
        for (unsigned long long int i_4 = 2; i_4 < 14; i_4 += 3) 
        {
            for (_Bool i_5 = 1; i_5 < 1; i_5 += 1) 
            {
                {
                    var_25 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (-(((/* implicit */int) ((short) arr_6 [i_5] [i_5] [i_5 - 1] [i_5])))))) ? (arr_10 [i_4 - 1] [i_0 + 1] [i_0] [(short)8]) : (((((/* implicit */_Bool) (-(((/* implicit */int) (short)21592))))) ? (((int) var_12)) : (((/* implicit */int) arr_8 [i_0] [i_0 + 2] [(unsigned short)3] [i_4 + 1]))))));
                    arr_17 [i_0 + 3] [i_0 + 3] [11LL] [i_5 - 1] = ((/* implicit */int) arr_3 [15U]);
                }
            } 
        } 
    }
}
