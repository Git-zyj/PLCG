/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 223789
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=223789 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/223789
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
    /* LoopSeq 4 */
    /* vectorizable */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        var_13 = ((/* implicit */int) ((_Bool) ((((/* implicit */_Bool) 12364854201955992551ULL)) ? (var_12) : (((/* implicit */long long int) var_2)))));
        var_14 *= ((/* implicit */unsigned short) ((((/* implicit */int) ((((/* implicit */int) var_8)) >= (((/* implicit */int) (_Bool)1))))) << ((((~(var_12))) - (2963503440175473841LL)))));
        var_15 = ((/* implicit */_Bool) ((((/* implicit */_Bool) -901974638653208985LL)) ? (-556896205) : (((/* implicit */int) (_Bool)1))));
        arr_2 [i_0] = ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)0))) % (12043845496951995164ULL)));
        /* LoopNest 3 */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (unsigned long long int i_2 = 1; i_2 < 9; i_2 += 1) 
            {
                for (signed char i_3 = 0; i_3 < 11; i_3 += 2) 
                {
                    {
                        var_16 = ((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) / (var_4)));
                        var_17 = ((/* implicit */long long int) max((var_17), (((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */int) (_Bool)0)) + (((/* implicit */int) var_10))))) ? (var_0) : (((/* implicit */unsigned long long int) ((((/* implicit */int) (short)-5923)) - (((/* implicit */int) (short)15964))))))))));
                        var_18 = ((/* implicit */int) var_0);
                    }
                } 
            } 
        } 
    }
    for (int i_4 = 1; i_4 < 23; i_4 += 3) 
    {
        arr_13 [11ULL] [4] = ((int) (((((_Bool)1) || ((_Bool)1))) ? (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)79))))) : (((((/* implicit */_Bool) (unsigned short)45648)) ? (var_7) : (var_11)))));
        arr_14 [i_4] = ((/* implicit */short) ((((/* implicit */int) ((((/* implicit */_Bool) ((unsigned long long int) var_12))) && (((/* implicit */_Bool) 1853604837U))))) < (((((/* implicit */_Bool) 9009118745608965558ULL)) ? (((/* implicit */int) (unsigned char)10)) : (945164656)))));
        arr_15 [i_4] = ((/* implicit */unsigned char) (((((_Bool)1) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) var_9)))) >= (var_11)));
    }
    for (short i_5 = 3; i_5 < 13; i_5 += 1) 
    {
        var_19 |= ((/* implicit */long long int) ((((((((/* implicit */unsigned long long int) 0LL)) | (var_0))) % (((/* implicit */unsigned long long int) ((/* implicit */int) var_1))))) & (((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) * (17LL))))));
        arr_20 [(unsigned short)12] = ((/* implicit */int) ((unsigned int) ((unsigned char) ((_Bool) var_3))));
        arr_21 [i_5] = ((/* implicit */int) (_Bool)0);
    }
    for (signed char i_6 = 3; i_6 < 8; i_6 += 2) 
    {
        var_20 = ((/* implicit */short) max((var_20), (((/* implicit */short) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_5)) ? (1264659538) : (((/* implicit */int) var_8))))))))));
        arr_24 [i_6] [i_6] |= ((/* implicit */_Bool) (-(((unsigned long long int) ((4294967295U) * (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-12))))))));
    }
    var_21 = ((/* implicit */unsigned char) ((((/* implicit */long long int) var_7)) ^ (var_12)));
}
