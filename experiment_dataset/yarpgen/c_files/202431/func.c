/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 202431
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=202431 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/202431
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
    for (unsigned char i_0 = 0; i_0 < 24; i_0 += 1) 
    {
        /* LoopNest 3 */
        for (unsigned int i_1 = 0; i_1 < 24; i_1 += 2) 
        {
            for (unsigned short i_2 = 0; i_2 < 24; i_2 += 1) 
            {
                for (unsigned char i_3 = 3; i_3 < 22; i_3 += 2) 
                {
                    {
                        var_16 = ((/* implicit */short) (signed char)-114);
                        var_17 = ((/* implicit */signed char) min((((/* implicit */unsigned long long int) var_11)), (((((unsigned long long int) (_Bool)1)) / (((/* implicit */unsigned long long int) ((((/* implicit */int) (_Bool)1)) / (((/* implicit */int) (_Bool)1)))))))));
                        var_18 = ((/* implicit */unsigned char) min(((~(((/* implicit */int) var_7)))), (((/* implicit */int) (short)-25521))));
                        var_19 = ((/* implicit */unsigned char) var_5);
                    }
                } 
            } 
        } 
        var_20 = ((/* implicit */short) 6335209525841883825ULL);
    }
    for (unsigned long long int i_4 = 0; i_4 < 10; i_4 += 1) 
    {
        var_21 = ((/* implicit */short) ((unsigned long long int) var_13));
        var_22 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) (-2147483647 - 1))), (7588592517180546770ULL)))) || (((/* implicit */_Bool) var_13))));
        /* LoopNest 3 */
        for (signed char i_5 = 0; i_5 < 10; i_5 += 1) 
        {
            for (_Bool i_6 = 0; i_6 < 0; i_6 += 1) 
            {
                for (short i_7 = 2; i_7 < 7; i_7 += 2) 
                {
                    {
                        var_23 = ((/* implicit */unsigned int) ((((/* implicit */unsigned int) ((/* implicit */int) ((unsigned char) (unsigned short)4092)))) <= (((1073741824U) & (((/* implicit */unsigned int) ((/* implicit */int) (signed char)63)))))));
                        var_24 = ((/* implicit */unsigned long long int) max((var_24), (((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned char)156)) <= (((/* implicit */int) var_11)))))));
                        var_25 = ((/* implicit */signed char) ((unsigned int) 2147483647));
                    }
                } 
            } 
        } 
    }
    var_26 -= ((/* implicit */short) var_13);
}
