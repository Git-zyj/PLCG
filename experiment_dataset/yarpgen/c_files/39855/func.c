/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 39855
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=39855 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/39855
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
    var_18 &= ((/* implicit */short) min((var_10), (var_11)));
    /* LoopSeq 3 */
    for (unsigned int i_0 = 0; i_0 < 21; i_0 += 2) 
    {
        arr_4 [i_0] [i_0] &= ((/* implicit */long long int) ((((/* implicit */int) (short)30006)) << (((max((((/* implicit */unsigned int) (short)-1)), (min((var_11), (((/* implicit */unsigned int) -1413917515)))))) - (4294967286U)))));
        arr_5 [i_0] = ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 133169152ULL)) ? (-500893325) : (((/* implicit */int) (unsigned short)27664))))) > (((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)94))) ^ (((15639435199617640575ULL) | (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)25))))))));
        arr_6 [i_0] [18U] = (+(((((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) arr_3 [0ULL] [i_0]))) % (3365774368U)))) ? (((/* implicit */int) min(((unsigned short)21), (((/* implicit */unsigned short) var_16))))) : (((/* implicit */int) (_Bool)1)))));
        arr_7 [i_0] [i_0] = ((/* implicit */_Bool) arr_1 [i_0]);
    }
    for (int i_1 = 0; i_1 < 11; i_1 += 1) 
    {
        arr_12 [10LL] = ((/* implicit */long long int) (signed char)-101);
        arr_13 [(short)6] [(short)3] = ((/* implicit */unsigned long long int) min((((/* implicit */unsigned int) ((15762598695796736LL) <= (((/* implicit */long long int) ((/* implicit */int) (_Bool)1)))))), (max((((/* implicit */unsigned int) (unsigned char)122)), (4294967292U)))));
    }
    for (unsigned long long int i_2 = 0; i_2 < 19; i_2 += 3) 
    {
        arr_16 [i_2] = ((/* implicit */_Bool) ((short) min((-100452463), (((/* implicit */int) (short)0)))));
        arr_17 [(unsigned short)3] [(unsigned short)3] = ((/* implicit */unsigned short) max((((/* implicit */unsigned long long int) 8U)), (4095800137337697626ULL)));
        arr_18 [4LL] [4LL] = ((/* implicit */_Bool) max((max(((unsigned short)21), ((unsigned short)21))), (((/* implicit */unsigned short) (signed char)-27))));
        /* LoopNest 2 */
        for (unsigned short i_3 = 0; i_3 < 19; i_3 += 3) 
        {
            for (unsigned char i_4 = 0; i_4 < 19; i_4 += 2) 
            {
                {
                    arr_26 [i_3] = ((/* implicit */long long int) (~((+(((/* implicit */int) ((signed char) (unsigned short)65517)))))));
                    arr_27 [i_4] [i_4] &= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned char)133)) || (((/* implicit */_Bool) ((unsigned char) (short)-2926)))));
                    arr_28 [i_2] [i_2] [i_2] [(signed char)12] = ((/* implicit */unsigned long long int) arr_1 [i_4]);
                    arr_29 [i_2] [i_3] [i_3] [i_4] = ((/* implicit */int) ((unsigned int) ((unsigned short) (~(((/* implicit */int) (unsigned short)65517))))));
                }
            } 
        } 
        arr_30 [i_2] = ((/* implicit */short) min((((((/* implicit */_Bool) ((long long int) arr_14 [i_2] [i_2]))) ? (((((/* implicit */_Bool) (unsigned char)48)) ? (arr_14 [16ULL] [16ULL]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-79))))) : (((/* implicit */unsigned long long int) arr_0 [i_2])))), (((/* implicit */unsigned long long int) ((((((/* implicit */unsigned long long int) var_12)) % (var_15))) < (((/* implicit */unsigned long long int) ((1946620900) - (((/* implicit */int) (short)-15650))))))))));
    }
}
