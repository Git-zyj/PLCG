/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 238313
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=238313 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/238313
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
    for (unsigned short i_0 = 0; i_0 < 17; i_0 += 3) /* same iter space */
    {
        var_19 = ((/* implicit */unsigned short) (((-(((((/* implicit */int) (signed char)-1)) | (((/* implicit */int) (_Bool)1)))))) <= ((-(((/* implicit */int) (_Bool)1))))));
        arr_2 [i_0] [i_0] = (~((~((~(((/* implicit */int) (signed char)-10)))))));
        var_20 = ((/* implicit */int) ((((/* implicit */int) ((((/* implicit */_Bool) ((2132885216) ^ ((-2147483647 - 1))))) || (((/* implicit */_Bool) (signed char)10))))) > (1032464481)));
        var_21 = ((((/* implicit */int) (unsigned short)9837)) <= ((+(((/* implicit */int) (signed char)-95)))));
    }
    for (unsigned short i_1 = 0; i_1 < 17; i_1 += 3) /* same iter space */
    {
        /* LoopSeq 1 */
        for (unsigned short i_2 = 0; i_2 < 17; i_2 += 1) 
        {
            arr_7 [i_1] = ((/* implicit */_Bool) (~(((/* implicit */int) ((((/* implicit */int) (unsigned short)55699)) < (((/* implicit */int) (_Bool)1)))))));
            arr_8 [i_1] [i_2] [i_1] = ((/* implicit */signed char) (_Bool)1);
        }
        /* LoopSeq 2 */
        /* vectorizable */
        for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
        {
            var_22 = ((/* implicit */unsigned short) ((((/* implicit */int) (!(((/* implicit */_Bool) (-2147483647 - 1)))))) % ((~(((/* implicit */int) (_Bool)1))))));
            var_23 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (signed char)-17)) || ((_Bool)1)));
        }
        /* vectorizable */
        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
        {
            var_24 = ((/* implicit */signed char) (unsigned short)55699);
            arr_14 [i_1] = (-(((/* implicit */int) (_Bool)1)));
            var_25 = ((((/* implicit */_Bool) (signed char)1)) && (((/* implicit */_Bool) (signed char)15)));
        }
    }
    /* vectorizable */
    for (unsigned short i_5 = 0; i_5 < 17; i_5 += 3) /* same iter space */
    {
        /* LoopSeq 2 */
        for (int i_6 = 0; i_6 < 17; i_6 += 1) 
        {
            var_26 += ((/* implicit */signed char) -1032464471);
            arr_22 [i_5] [i_5] [i_6] = ((/* implicit */signed char) ((-1032464471) != ((~(((/* implicit */int) (signed char)1))))));
        }
        for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
        {
            var_27 = (!(((/* implicit */_Bool) -1480871013)));
            var_28 = ((/* implicit */unsigned short) ((((/* implicit */int) (signed char)-21)) % (15)));
            var_29 = ((/* implicit */unsigned short) max((var_29), (((/* implicit */unsigned short) 229623831))));
        }
        /* LoopSeq 2 */
        for (unsigned short i_8 = 0; i_8 < 17; i_8 += 2) 
        {
            var_30 = ((/* implicit */_Bool) (+((~(1032464471)))));
            var_31 -= ((/* implicit */_Bool) (~(((/* implicit */int) (signed char)-10))));
        }
        for (unsigned short i_9 = 0; i_9 < 17; i_9 += 3) 
        {
            var_32 = (+(((/* implicit */int) (signed char)10)));
            var_33 = ((/* implicit */_Bool) ((((((/* implicit */int) (signed char)(-127 - 1))) | (((/* implicit */int) (signed char)-36)))) | (((/* implicit */int) (signed char)-38))));
            var_34 = ((/* implicit */_Bool) (+(-1229604431)));
        }
    }
    for (unsigned short i_10 = 0; i_10 < 17; i_10 += 3) /* same iter space */
    {
        var_35 = ((/* implicit */_Bool) ((((/* implicit */int) (!(((/* implicit */_Bool) -856482034))))) - ((+((+(((/* implicit */int) (signed char)-1))))))));
        arr_33 [i_10] = ((/* implicit */unsigned short) 1032464471);
    }
    var_36 = ((/* implicit */unsigned short) (signed char)-1);
    var_37 = ((/* implicit */int) var_3);
    var_38 ^= ((/* implicit */int) ((var_15) && (((/* implicit */_Bool) (unsigned short)18886))));
}
