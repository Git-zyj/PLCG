/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 52934
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=52934 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/52934
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
    /* LoopSeq 3 */
    for (_Bool i_0 = 0; i_0 < 0; i_0 += 1) 
    {
        arr_3 [i_0] = ((/* implicit */unsigned short) (-(((((/* implicit */_Bool) (signed char)-61)) ? (((/* implicit */int) max(((unsigned short)0), (((/* implicit */unsigned short) (_Bool)1))))) : (((/* implicit */int) (signed char)-121))))));
        var_18 = min((((/* implicit */unsigned long long int) (unsigned char)216)), (5080590555908605703ULL));
        var_19 = ((/* implicit */unsigned char) ((((unsigned long long int) arr_2 [i_0 + 1])) * (((((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_0 + 1]))) / (17044530542779908609ULL)))));
    }
    for (unsigned long long int i_1 = 1; i_1 < 18; i_1 += 2) /* same iter space */
    {
        /* LoopNest 2 */
        for (unsigned long long int i_2 = 0; i_2 < 19; i_2 += 2) 
        {
            for (signed char i_3 = 0; i_3 < 19; i_3 += 3) 
            {
                {
                    var_20 = ((/* implicit */signed char) ((arr_10 [i_1 - 1] [i_1 - 1] [(_Bool)1]) && (((/* implicit */_Bool) (unsigned short)9))));
                    arr_12 [1U] [1U] [i_3] = ((arr_5 [i_3]) + (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 18446744073709551610ULL)) ? (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)255))))) : (((int) arr_6 [i_1] [i_3]))))));
                    var_21 = ((/* implicit */unsigned long long int) (signed char)-75);
                }
            } 
        } 
        arr_13 [i_1 - 1] [i_1] = ((/* implicit */unsigned int) (unsigned char)46);
        arr_14 [i_1] = ((/* implicit */unsigned short) max(((!(((/* implicit */_Bool) ((unsigned short) var_17))))), (((arr_10 [(unsigned char)18] [i_1] [5]) || (((/* implicit */_Bool) var_7))))));
        var_22 = ((/* implicit */unsigned long long int) (+(((arr_4 [i_1 - 1]) * (((/* implicit */unsigned int) (+(var_10))))))));
    }
    for (unsigned long long int i_4 = 1; i_4 < 18; i_4 += 2) /* same iter space */
    {
        arr_17 [i_4] = ((/* implicit */_Bool) ((unsigned char) (_Bool)1));
        var_23 = ((/* implicit */unsigned char) max((var_23), (((/* implicit */unsigned char) min(((-(arr_5 [i_4 - 1]))), ((+(arr_11 [i_4 - 1] [i_4 - 1] [i_4 - 1] [(unsigned short)18]))))))));
        arr_18 [i_4] = ((/* implicit */unsigned char) ((((/* implicit */int) (unsigned char)219)) > (-373928024)));
        var_24 = ((/* implicit */unsigned char) max((var_24), (((/* implicit */unsigned char) ((((/* implicit */_Bool) var_1)) ? (((((/* implicit */int) arr_16 [12ULL])) | (((/* implicit */int) arr_16 [16U])))) : (((/* implicit */int) ((((((/* implicit */int) (signed char)25)) / (var_14))) != (((/* implicit */int) ((((/* implicit */int) (_Bool)1)) > (((/* implicit */int) (signed char)-125)))))))))))));
    }
    var_25 = ((/* implicit */int) min((var_25), (((/* implicit */int) var_15))));
}
