/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 46520
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=46520 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/46520
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
    var_19 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (-((~(((/* implicit */int) (signed char)-1))))))) ? (max((((/* implicit */unsigned long long int) var_10)), (11067551214004501613ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned short) ((((/* implicit */_Bool) 7379192859705050003ULL)) ? (((/* implicit */unsigned long long int) 5604521533627681405LL)) : (8349401127240492797ULL))))))));
    /* LoopSeq 3 */
    for (signed char i_0 = 1; i_0 < 15; i_0 += 4) 
    {
        var_20 = ((/* implicit */long long int) max((var_20), (((/* implicit */long long int) ((unsigned long long int) 11067551214004501613ULL)))));
        arr_2 [i_0] = ((/* implicit */_Bool) max((((/* implicit */int) ((7379192859705049998ULL) < (((/* implicit */unsigned long long int) -3055461265551439508LL))))), ((+((-2147483647 - 1))))));
        /* LoopNest 3 */
        for (signed char i_1 = 2; i_1 < 15; i_1 += 3) 
        {
            for (unsigned char i_2 = 2; i_2 < 16; i_2 += 4) 
            {
                for (int i_3 = 0; i_3 < 17; i_3 += 3) 
                {
                    {
                        var_21 += ((/* implicit */int) ((_Bool) ((_Bool) 4283142832U)));
                        var_22 = ((/* implicit */_Bool) 2147483647);
                    }
                } 
            } 
        } 
        var_23 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((unsigned char) ((((/* implicit */unsigned long long int) -2147483619)) % (11067551214004501592ULL))))) ? (((unsigned int) ((((/* implicit */long long int) ((/* implicit */int) (unsigned short)20849))) ^ (3160170985698686323LL)))) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1)))));
    }
    for (long long int i_4 = 4; i_4 < 22; i_4 += 3) /* same iter space */
    {
        arr_16 [i_4 - 1] = min(((-(-3160170985698686324LL))), (((/* implicit */long long int) ((((/* implicit */unsigned int) -1)) * (24576U)))));
        var_24 = ((/* implicit */unsigned int) (+(min((((/* implicit */unsigned long long int) (_Bool)1)), (((((/* implicit */_Bool) -495274188)) ? (((/* implicit */unsigned long long int) 1391228664U)) : (11067551214004501613ULL)))))));
        /* LoopNest 3 */
        for (unsigned short i_5 = 0; i_5 < 23; i_5 += 3) 
        {
            for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
            {
                for (unsigned short i_7 = 0; i_7 < 23; i_7 += 3) 
                {
                    {
                        var_25 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)-56)) ? (((((/* implicit */_Bool) 7379192859705049998ULL)) ? (2903738631U) : (((/* implicit */unsigned int) 2147483629)))) : (((/* implicit */unsigned int) ((((/* implicit */int) (unsigned char)9)) ^ (((/* implicit */int) (unsigned char)247)))))));
                        var_26 = ((/* implicit */_Bool) 18446744073709551615ULL);
                    }
                } 
            } 
        } 
    }
    for (long long int i_8 = 4; i_8 < 22; i_8 += 3) /* same iter space */
    {
        var_27 = ((/* implicit */int) (_Bool)1);
        arr_27 [i_8 - 1] [i_8] = ((/* implicit */unsigned int) (+(((2147483647) ^ (-1397967264)))));
        arr_28 [i_8] [i_8 - 3] = ((/* implicit */unsigned int) -3635885970891861277LL);
    }
    var_28 -= ((/* implicit */_Bool) var_10);
    var_29 = ((unsigned int) 888053200);
    var_30 = ((/* implicit */unsigned int) min((var_30), (((/* implicit */unsigned int) ((((((/* implicit */_Bool) ((((/* implicit */int) (_Bool)1)) ^ (((/* implicit */int) (unsigned char)46))))) ? (((/* implicit */long long int) ((1397967264) | (-1397967269)))) : (((long long int) 1607142357087660271LL)))) % (-8194950267526320788LL))))));
}
