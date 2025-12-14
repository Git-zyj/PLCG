/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 245134
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=245134 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/245134
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
    for (unsigned int i_0 = 1; i_0 < 14; i_0 += 2) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                var_17 = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) min((8846018734076903462ULL), (arr_0 [i_0])))) ? ((+(arr_4 [i_0]))) : (min((var_3), (arr_4 [(_Bool)1]))))) * (((/* implicit */long long int) ((/* implicit */int) var_14)))));
                var_18 = ((/* implicit */signed char) ((((/* implicit */unsigned long long int) 1073217536)) | (13ULL)));
            }
        } 
    } 
    /* LoopSeq 2 */
    for (long long int i_2 = 0; i_2 < 23; i_2 += 2) 
    {
        /* LoopNest 3 */
        for (_Bool i_3 = 1; i_3 < 1; i_3 += 1) 
        {
            for (unsigned int i_4 = 2; i_4 < 22; i_4 += 2) 
            {
                for (signed char i_5 = 0; i_5 < 23; i_5 += 2) 
                {
                    {
                        var_19 = ((/* implicit */long long int) min((var_12), (((/* implicit */short) ((signed char) max((var_9), (((/* implicit */short) var_14))))))));
                        var_20 = ((/* implicit */long long int) min((((((/* implicit */unsigned long long int) ((/* implicit */int) max((((/* implicit */unsigned short) var_1)), (var_15))))) | (((((/* implicit */_Bool) var_2)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_13))) : (16226276651569161722ULL))))), (((/* implicit */unsigned long long int) var_10))));
                    }
                } 
            } 
        } 
        var_21 = ((/* implicit */unsigned short) (-(((((/* implicit */_Bool) ((unsigned short) 1925868330))) ? (((/* implicit */unsigned long long int) var_6)) : (min((((/* implicit */unsigned long long int) arr_8 [i_2])), (4503599627370495ULL)))))));
        var_22 = ((/* implicit */unsigned int) max((var_22), (((/* implicit */unsigned int) min((((((/* implicit */int) min(((_Bool)0), (var_13)))) | (-1073217536))), (((/* implicit */int) ((unsigned short) ((((/* implicit */_Bool) var_8)) ? (var_8) : (var_8))))))))));
    }
    for (unsigned char i_6 = 1; i_6 < 10; i_6 += 1) 
    {
        var_23 = ((/* implicit */long long int) min((var_23), (((/* implicit */long long int) ((unsigned long long int) ((signed char) var_11))))));
        var_24 = ((/* implicit */_Bool) (~(((unsigned int) max((((/* implicit */unsigned int) (signed char)-85)), (4046648873U))))));
        /* LoopNest 3 */
        for (unsigned int i_7 = 4; i_7 < 10; i_7 += 1) 
        {
            for (unsigned short i_8 = 0; i_8 < 11; i_8 += 1) 
            {
                for (long long int i_9 = 0; i_9 < 11; i_9 += 2) 
                {
                    {
                        var_25 = ((/* implicit */unsigned int) max((var_25), (((unsigned int) max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (signed char)31)) ? (((/* implicit */int) (unsigned char)41)) : (((/* implicit */int) (unsigned short)7192))))), (((unsigned long long int) var_1)))))));
                        var_26 = ((/* implicit */_Bool) ((((unsigned int) 255ULL)) & (((/* implicit */unsigned int) ((((/* implicit */_Bool) (~(arr_5 [i_7 - 3] [i_8])))) ? (var_16) : (((int) var_13)))))));
                    }
                } 
            } 
        } 
    }
    var_27 = ((/* implicit */_Bool) 377378325);
}
